#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tablaDeCuadruplas.h"

#define ANCHO_LINEA 70

TablaDeCuadruplas nuevaTablaDeCuadruplas(void){
    TablaDeCuadruplas tabla;
    tabla.siguiente = 1;
    return tabla;
}

int gen(TablaDeCuadruplas *tabla, char *operador, int operando1, int operando2, int resultado) {
    if (tabla->siguiente >= MAX_CUADRUPLAS) {
        printf("Error: la tabla de cuadruplas esta llena\n");
        exit(1);
    }
    CeldaCuadrupla *c = &tabla->cuadruplas[tabla->siguiente];
    c->operador = operador;
    c->operando_1 = operando1;
    c->operando_2 = operando2;
    c->resultado = resultado;
    return tabla->siguiente++;
}

// Impresión de la tabla de cuadruplas
static void escribeOperando(int sid, TablaDeSimbolos ts) {
    if (sid == VACIO)
        printf("%-15s ", "-");
    else
        printf("%-15s ", ts.celdas[sid].nombre);
}

static void imprimeCentrado(char *texto) {
    int espacios = (ANCHO_LINEA - (int) strlen(texto)) / 2;
    printf("%*s%s\n", espacios, "", texto);
}

static void imprimeLinea(char c) {
    for (int i = 0; i < ANCHO_LINEA; i++)
        putchar(c);
    putchar('\n');
}

void imprimeTablaDeCuadruplas(TablaDeCuadruplas tabla, TablaDeSimbolos ts) {
    if (tabla.siguiente == 0) {
        printf("La tabla de cuadruplas esta vacia\n");
        return;
    }
    imprimeCentrado("=== CONTENIDO DE LA TABLA DE CUADRUPLAS ===");
    printf("%-5s %-10s %-15s %-15s %s\n", "N", "Operador", "Operando 1", "Operando 2", "Resultado");
    imprimeLinea('-');
    for (int i = 0; i < tabla.siguiente; i++) {
        CeldaCuadrupla c = tabla.cuadruplas[i];
        printf("%-5d %-10s ", i, c.operador);
        escribeOperando(c.operando_1, ts);
        escribeOperando(c.operando_2, ts);
        if (c.resultado == VACIO)
            printf("-\n");
        else
            printf("%s\n", ts.celdas[c.resultado].nombre);
    }
    imprimeLinea('=');
}

static char *nombre(int sid, TablaDeSimbolos ts) {
    return sid == VACIO ? "" : ts.celdas[sid].nombre;
}

static void escribeCuadrupla(FILE *f, int n, CeldaCuadrupla c, TablaDeSimbolos ts) {
    char *op = c.operador;
    fprintf(f, "%d ", n);
    if (strcmp(op, ":=") == 0)                          /* aux := a */
        fprintf(f, "%s := %s\n", nombre(c.resultado, ts), nombre(c.operando_1, ts));
    else if (strcmp(op, "goto") == 0) {                 /* goto 17 */
        if (c.resultado == VACIO) fprintf(f, "goto\n");
        else fprintf(f, "goto %d\n", c.resultado);
    }
    else if (strncmp(op, "if", 2) == 0) {               /* if a >= b goto 6 */
        fprintf(f, "if %s %s %s goto", nombre(c.operando_1, ts), op + 2, nombre(c.operando_2, ts));
        if (c.resultado == VACIO) fprintf(f, "\n");
        else fprintf(f, " %d\n", c.resultado);
    }
    else if (strcmp(op, "input") == 0 || strcmp(op, "output") == 0)   /* input a */
        fprintf(f, "%s %s\n", op, nombre(c.resultado, ts));
    else if (c.operando_2 == VACIO)                     /* t2 := -u a  /  t3 := no c */
        fprintf(f, "%s := %s %s\n", nombre(c.resultado, ts), op, nombre(c.operando_1, ts));
    else                                                /* t1 := suma + comb */
        fprintf(f, "%s := %s %s %s\n", nombre(c.resultado, ts), nombre(c.operando_1, ts), op, nombre(c.operando_2, ts));
}

void escribeCodigoIntermedio(FILE *f, TablaDeCuadruplas tabla, TablaDeSimbolos ts) {
    for (int i = 1; i < tabla.siguiente; i++)
        escribeCuadrupla(f, i, tabla.cuadruplas[i], ts);
}

void generarCodigoIntermedio(TablaDeCuadruplas tabla, TablaDeSimbolos ts) {
    FILE *archivo = fopen("codigo_intermedio.txt", "w");
    if (archivo == NULL) {
        printf("Error al abrir el archivo para escribir el codigo intermedio.\n");
        return;
    }
    escribeCodigoIntermedio(archivo, tabla, ts);
    fclose(archivo);
}