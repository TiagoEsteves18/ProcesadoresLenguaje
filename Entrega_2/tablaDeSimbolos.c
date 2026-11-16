#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tablaDeSimbolos.h"

TablaDeSimbolos nuevaTablaDeSimbolos(void) {
    return NULL;
}

bool insertar(TablaDeSimbolos *tabla, char *nombre,
              LiteralT literal, bool esConstante) {

    for (CeldaSimbolo *celda = *tabla; celda != NULL; celda = celda->sig) {
        if (strcmp(celda->nombre, nombre) == 0) {
            if (!esConstante && !celda->esConstante &&
                celda->valor.tipoDelValor == literal.tipoDelValor) {
                return true;
            }
            fprintf(stderr, "Ya existe un elemento llamado %s en la tabla de simbolos\n",
                    nombre);
            return false;
        }
    }
    CeldaSimbolo * celda;
    if ((celda = (CeldaSimbolo *) malloc(sizeof(CeldaSimbolo))) == NULL) {
            printf("No hay memoria para una celda de la tabla de simbolos");
            exit(1);
    }
    celda->valor = literal;
    celda->nombre = nombre;
    celda->esConstante = esConstante;
    celda->sig = *tabla;
    *tabla = celda;
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
