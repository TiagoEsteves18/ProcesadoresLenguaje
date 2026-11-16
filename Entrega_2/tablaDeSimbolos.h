#ifndef FFF_TABLA_DE_SIMBOLOS_H
#define FFF_TABLA_DE_SIMBOLOS_H

#include <stdbool.h>
#include "literal.h"

#define MAX_CELDA 100

typedef struct celdaSimbolo {
    int sid;
    char *nombre;
    LiteralT valor;
    bool esConstante;
    struct celdaSimbolo *sig; 
} CeldaSimbolo;

typedef struct TablaDeSimbolos{
    CeldaSimbolo celdas[MAX_CELDA];
    int ultimo;
} TablaDeSimbolos;

TablaDeSimbolos nuevaTablaDeSimbolos(void);
bool insertarEnTablaDeSimbolos(TablaDeSimbolos *tabla, char *nombre, LiteralT literal, bool esConstante);
void imprimeTablaDeSimbolos(TablaDeSimbolos tabla);

#endif
