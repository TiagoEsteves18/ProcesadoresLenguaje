#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tablaDeSimbolos.h"

TablaDeSimbolos nuevaTablaDeSimbolos(void) {
    TablaDeSimbolos tabla;
    tabla.ultimo = 0;
    return tabla;
}

bool insertarEnTablaDeSimbolos(TablaDeSimbolos *tabla, char *nombre,
               ValorCelda valor, TipoCelda tipo) {

    if(tabla->ultimo >= MAX_CELDA) {
        printf("Error: la tabla de simbolos esta llena\n");
        return false;
    }

    for (int i = 0; i < tabla->ultimo; i++) {
        if (strcmp(tabla->celdas[i].nombre, nombre) == 0) {
            printf("Error: el simbolo '%s' ya existe en la tabla de simbolos\n", nombre);
            return false;
        }
    }

    CeldaSimbolo *celda;
    if ((celda = (CeldaSimbolo *) malloc(sizeof(CeldaSimbolo))) == NULL) {
            printf("No hay memoria para una celda de la tabla de simbolos");
            exit(1);
    }
    celda->valor = valor;
    celda->nombre = nombre;
    celda->tipo = tipo;
    tabla->celdas[tabla->ultimo] = *celda;
    tabla->ultimo++;
    return true;
}

void escribeCelda(ValorCelda valor) {
    if(valor.tipo == CONSTANTE) {
        printf("%-15s ", "Constante");
        escribeLiteral(valor.literal);
    } else {
        printf("%-15s ", "Variable");
        
    }
}

void imprimeTablaDeSimbolos(TablaDeSimbolos tabla) {
    if (tabla.ultimo == 0) {
        printf("La tabla de simbolos esta vacia\n");
        return;
    }
    printf("=== CONTENIDO DE LA TABLA DE SIMBOLOS ===\n");
    printf("%-20s %-15s %s\n", "Nombre", "Tipo", "Valor");
    printf("-----------------------------------------------\n");
    for (int i = 0; i < tabla.ultimo; i++) {
        printf("%-20s ", tabla.celdas[i].nombre);
        escribeCelda(tabla.celdas[i].valor);
    }
    printf("===============================================\n");
}
