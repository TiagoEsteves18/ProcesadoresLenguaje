#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tablaDeSimbolos.h"

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
        printf("Error: el simbolo '%s' ya existe en la tabla de simbolos\n", nombre);
        return -1;
    }
    CeldaSimbolo *celda = &tabla->celdas[tabla->ultimo];
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

int insertarVariableTS(TablaDeSimbolos *tabla, char *nombre, NombreDeTipoT tipo){
    int sid = insertar(tabla, nombre, VARIABLE);
    if(sid != -1){
        tabla->celdas[sid].valorCelda.variable = tipo;
    }   
    return sid;
}

// Por si hay una lista (creo que sirve, porque si está algo como: 
// a,b: entero, solo se le puede asignar a a cuando lea entero, pero antes lee b)
// NO ESTOY SEGURO DE QUE ESTO FUNCIONE ASÍ
void  ponerTipo(TablaDeSimbolos *tabla, int sid, NombreDeTipoT tipo){
    tabla->celdas[sid].valorCelda.variable = tipo;
}


// -- Impresión de la tabla --
static char *nombreDeClase(TiposSimbolo c) {
    switch (c) {
        case CONSTANTE: return "Constante";
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
        default:       return "Provisional";
    }
}

static void escribeCelda(CeldaSimbolo c) {
    if (c.tipoSimbolo == VARIABLE) {
        printf("%-15s %-12s %-10s -\n",
               c.nombre,
               nombreDeClase(c.tipoSimbolo),
               nombreDeTipo(c.valorCelda.variable));
        return;
    }
    LiteralT lit = c.valorCelda.constante;
    printf("%-15s %-12s %-10s ",
           c.nombre,
           nombreDeClase(c.tipoSimbolo),
           nombreDeTipo(lit.tipoDelValor));
    switch (lit.tipoDelValor) {
        case ENTERO:   printf("%d\n", lit.valor.valorEntero); break;
        case REAL:     printf("%f\n", lit.valor.valorReal); break;
        case CADENA:   printf("%s\n", lit.valor.valorCadena); break;
        case CARACTER: printf("%c\n", lit.valor.valorCaracter); break;
        case BOOLEANO: printf("%s\n", lit.valor.valorBooleano == VERDADERO ? "Verdadero" : "Falso"); break;
        default:       printf("?\n"); break;
    }
}

void imprimeTablaDeSimbolos(TablaDeSimbolos tabla) {
    if (tabla.ultimo == 0) {
        printf("La tabla de simbolos esta vacia\n");
        return;
    }
    printf("=== CONTENIDO DE LA TABLA DE SIMBOLOS ===\n");
    printf("%-5s %-15s %-12s %-10s %s\n", "SID", "Nombre", "Clase", "Tipo", "Valor");
    printf("-------------------------------------------------------\n");
    for (int i = 0; i < tabla.ultimo; i++) {
        printf("%-5d ", i);
        escribeCelda(tabla.celdas[i]);
    }
    printf("=======================================================\n");
}
