#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tablaDeSimbolos.h"

#define ANCHO_TIPO 24
#define ANCHO_LINEA 70

TablaDeSimbolos nuevaTablaDeSimbolos(void) {
    TablaDeSimbolos tabla;
    tabla.ultimo = 0;
    return tabla;
}

// Devuelve la posicion en la tabla de un símbolo según su nombre
int buscarSimbolo(TablaDeSimbolos *tabla, char *nombre){
    for(int i = 0; i < tabla->ultimo; i++){
        if(strcmp(tabla->celdas[i].nombre, nombre) == 0){
            return i;
        }
    }
    return -1;
}

// Método general de inserción
static int insertar(TablaDeSimbolos *tabla, char *nombre, TiposSimbolo tipoSimbolo) {

    if(tabla->ultimo >= MAX_CELDA) {
        printf("Error: la tabla de simbolos esta llena\n");
        return -1;
    }

    if (buscarSimbolo(tabla, nombre) != -1) {
         extern int yylineno;
        printf("Error en linea %d: el simbolo '%s' ya existe en la tabla de simbolos\n", yylineno, nombre);
        return -1;
    }
    CeldaSimbolo *celda = &tabla->celdas[tabla->ultimo];
    celda->sid = tabla->ultimo;
    celda->nombre = nombre;
    celda->tipoSimbolo = tipoSimbolo;
    return tabla->ultimo++;
}

int insertarConstanteTS(TablaDeSimbolos *tabla, char *nombre, ValorCelda valorCelda){
    int sid = insertar(tabla, nombre, CONSTANTE);
    if(sid != -1){
        tabla->celdas[sid].valorCelda = valorCelda;
    }   
    return sid;
}

int insertarVariableTS(TablaDeSimbolos *tabla, char *nombre, Variable variable){
    int sid = insertar(tabla, nombre, VARIABLE);
    if(sid != -1){
        tabla->celdas[sid].valorCelda.variable = variable;
    }   
    return sid;
}

// Esta funcion sirve para que si lea tabla[1..10], cuando lea el 1 le asocie un sid y pueda funcionar
int insertarLiteralTS(TablaDeSimbolos *tabla, LiteralT literal){
    char texto[64];
    switch (literal.tipoDelValor) {
        case ENTERO:   
            sprintf(texto, "%d", literal.valor.valorEntero); 
            break;
        case REAL:     
            sprintf(texto, "%f", literal.valor.valorReal); 
            break;
        case CARACTER: 
            sprintf(texto, "\"%c\"", literal.valor.valorCaracter);
            break;
        case CADENA:   
            snprintf(texto, sizeof(texto), "'%s'", literal.valor.valorCadena);
            break;
        case BOOLEANO: 
            sprintf(texto, "%s", literal.valor.valorBooleano == VERDADERO ? "verdadero" : "falso");
            break;
        default:       
            sprintf(texto, "?");
            break;
    }
    int sid = buscarSimbolo(tabla, texto);
    if (sid != -1)
        return sid;
    ValorCelda valorCelda;
    valorCelda.constante = literal;
    return insertarConstanteTS(tabla, strdup(texto), valorCelda);
}

// Si el simbolo es una constante entera, deja su valor en la variable valor y devuelve true
bool valorEnteroDeSimbolo(TablaDeSimbolos *tabla, int sid, int *valor){
    if (sid < 0 || tabla->celdas[sid].tipoSimbolo != CONSTANTE)
        return false;
    LiteralT lit = tabla->celdas[sid].valorCelda.constante;
    if (lit.tipoDelValor != ENTERO)
        return false;
    *valor = lit.valor.valorEntero;
    return true;
}

// Crea una variable temporal nueva del tipo que se ponga y devuelve su sid
int nuevoTemporal(TablaDeSimbolos *tabla, NombreDeTipoT tipo){
    static int contador = 0;
    char nombre[32];
    sprintf(nombre, "t%d", contador++);
    int sid = insertar(tabla, strdup(nombre), TEMPORAL);
    if(sid != -1){
        tabla->celdas[sid].valorCelda.variable.tipo = tipo;
        tabla->celdas[sid].valorCelda.variable.tipoDeVariable = SIMPLE;
    }
    return sid;
}

// Devuelve el tipo de un simbolo
NombreDeTipoT tipoDeSimbolo(TablaDeSimbolos *tabla, int sid){
    if (tabla->celdas[sid].tipoSimbolo == CONSTANTE)
        return tabla->celdas[sid].valorCelda.constante.tipoDelValor;
    return tabla->celdas[sid].valorCelda.variable.tipo;
}


// -- Impresión de la tabla --
static char *nombreDeClase(TiposSimbolo c) {
    switch (c) {
        case CONSTANTE: return "Constante";
        case TEMPORAL:  return "Temporal";
        default:        return "Variable";
    }
}

static char *nombreDeTipo(NombreDeTipoT t) {
    switch (t) {
        case BOOLEANO: return "Booleano";
        case CADENA:   return "Cadena";
        case CARACTER: return "Caracter";
        case ENTERO:   return "Entero";
        case REAL:     return "Real";
        default:       return "Desconocido";
    }
}

void printTablaTupla(TablaDeSimbolos *ts, int sid) {
    if(ts->celdas[sid].tipoSimbolo == VARIABLE && ts->celdas[sid].valorCelda.variable.tipoDeVariable == TUPLA) {
        Tupla tupla = ts->celdas[sid].valorCelda.variable.info.tupla;
        printf("Tupla con %d elementos:\n", tupla.cantidad);
        for (int i = 0; i < tupla.cantidad; i++) {
            int elemSid = tupla.nodos[i];
            CeldaSimbolo elem = ts->celdas[elemSid];
            printf("  Elemento %d: SID=%d, Nombre=%s, Tipo=%s\n", i, elem.sid, elem.nombre, nombreDeTipo(tipoDeSimbolo(ts, elemSid)));
        }
    }else if (ts->celdas[sid].tipoSimbolo == VARIABLE || ts->celdas[sid].valorCelda.variable.tipoDeVariable == TABLA)
    {
        Tabla tabla = ts->celdas[sid].valorCelda.variable.info.tabla;
        printf("Tabla con %d elementos:\n", tabla.listaSID.cantidad);
        for (int i = 0; i < tabla.listaSID.cantidad; i++) {
            int elemSid = tabla.listaSID.nodos[i];
            CeldaSimbolo elem = ts->celdas[elemSid];
            printf("  Elemento %d: SID=%d, Nombre=%s, Tipo=%s\n", i, elem.sid, elem.nombre, nombreDeTipo(tipoDeSimbolo(ts, elemSid)));
        }
    }else{
        printf("El SID %d no corresponde a una tupla o tabla.\n", sid);
    }
    
}



static void escribeCelda(FILE *f, CeldaSimbolo c) {
    char tipo[64];
    char info[64];
    fprintf(f, "%-5d %-15s %-12s ", c.sid, c.nombre, nombreDeClase(c.tipoSimbolo));

    if (c.tipoSimbolo != CONSTANTE) {
        Variable v = c.valorCelda.variable;
        switch (v.tipoDeVariable) {
            case TABLA:
                snprintf(tipo, sizeof(tipo), "Tabla[%d..%d] de %s", v.info.tabla.limiteInferior, v.info.tabla.limiteSuperior, nombreDeTipo(v.tipo));
                break;
            case TUPLA:
                snprintf(tipo, sizeof(tipo), "Tupla");
                break;
            default:
                snprintf(tipo, sizeof(tipo), "%s", nombreDeTipo(v.tipo));
                break;
        }
        fprintf(f, "%-*s -\n", ANCHO_TIPO, tipo);
        return;
    }
    LiteralT lit = c.valorCelda.constante;
    fprintf(f, "%-*s ", ANCHO_TIPO, nombreDeTipo(lit.tipoDelValor));
    switch (lit.tipoDelValor) {
        case ENTERO:   fprintf(f, "%d\n", lit.valor.valorEntero); break;
        case REAL:     fprintf(f, "%f\n", lit.valor.valorReal); break;
        case CADENA:   fprintf(f, "%s\n", lit.valor.valorCadena); break;
        case CARACTER: fprintf(f, "%c\n", lit.valor.valorCaracter); break;
        case BOOLEANO: fprintf(f, "%s\n", lit.valor.valorBooleano == VERDADERO ? "Verdadero" : "Falso"); break;
        default:       fprintf(f, "?\n"); break;
    }
}

static void imprimeCentrado(FILE *f, char *texto) {
    int espacios = (ANCHO_LINEA - (int) strlen(texto)) / 2;
    fprintf(f, "%*s%s\n", espacios, "", texto);
}

static void imprimeLinea(FILE *f, char c) {
    for (int i = 0; i < ANCHO_LINEA; i++)
        fputc(c, f);
    fputc('\n', f);
}

void imprimeTablaDeSimbolos(FILE *f, TablaDeSimbolos tabla) {
    if (tabla.ultimo == 0) {
        fprintf(f, "La tabla de simbolos esta vacia\n");
        return;
    }
    imprimeCentrado(f, "================ CONTENIDO DE LA TABLA DE SIMBOLOS ================");
    fprintf(f, "%-5s %-15s %-12s %-*s %-s\n", "SID", "Nombre", "Clase", ANCHO_TIPO, "Tipo", "Valor");
    imprimeLinea(f, '-');
    for (int i = 0; i < tabla.ultimo; i++) {
        escribeCelda(f, tabla.celdas[i]);
    }
    imprimeLinea(f, '=');
}
