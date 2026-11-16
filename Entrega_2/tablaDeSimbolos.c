#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tablaDeSimbolos.h"

TablaDeSimbolos nuevaTablaDeSimbolos(void) {
    TablaDeSimbolos tabla;
    tabla.ultimo = 0;
    return tabla;
}

bool insertar(TablaDeSimbolos *tabla, char *nombre,
              LiteralT literal, bool esConstante) {

    CeldaSimbolo *celda = tabla->celdas[0];

    if ((celda = (CeldaSimbolo *) malloc(sizeof(CeldaSimbolo))) == NULL) {
            printf("No hay memoria para una celda de la tabla de simbolos");
            exit(1);
    }
    celda->valor = literal;
    celda->nombre = nombre;
    celda->esConstante = esConstante;
    celda->sig = tabla->celdas;
    tabla->celdas = celda;
    tabla->ultimo++;
    return true;
}

void imprimeTabla(TablaDeSimbolos tabla) {
    if (tabla == NULL) {
        printf("La tabla de simbolos esta vacia\n");
        return;
    }
    printf("=== CONTENIDO DE LA TABLA DE SIMBOLOS ===\n");
    printf("%-20s %-15s %s\n", "Nombre", "Tipo", "Valor");
    printf("-----------------------------------------------\n");
    CeldaSimbolo *aux = tabla;
    while (aux != NULL) {
        printf("%-20s ", aux->nombre);
        escribeLiteral(aux->valor);
        aux = aux->sig;
    }
    printf("===============================================\n");
}
