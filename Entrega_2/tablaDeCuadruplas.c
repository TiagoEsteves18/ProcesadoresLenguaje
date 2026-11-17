#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tablaDeCuadruplas.h"

#define ANCHO_LINEA 70

TablaDeCuadruplas nuevaTablaDeCuadruplas(void){
    TablaDeCuadruplas tabla;
    tabla.siguiente = 0;
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