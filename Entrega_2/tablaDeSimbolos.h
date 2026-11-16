#ifndef FFF_TABLA_DE_SIMBOLOS_H
#define FFF_TABLA_DE_SIMBOLOS_H

#include "nombresDeTipos.h"
#include <stdbool.h>
#include "literal.h"

#define MAX_CELDA 100

typedef enum tipoCelda {
    CONSTANTE,
    VARIABLE
} TipoCelda;

typedef union valorCelda {
    int sid;
    TiposCelda tipo;
    LiteralT literal;
    NombreDeTipoT tipo;
} ValorCelda;

typedef struct celdaSimbolo {
    int sid;
    char *nombre;
    ValorCelda valor;
    TipoCelda tipo;
} CeldaSimbolo;

typedef struct TablaDeSimbolos{
    CeldaSimbolo celdas[MAX_CELDA];
    int ultimo;
} TablaDeSimbolos;

TablaDeSimbolos nuevaTablaDeSimbolos(void);
bool insertarEnTablaDeSimbolos(TablaDeSimbolos *tabla, char *nombre, ValorCelda valor, TipoCelda tipo);
void imprimeTablaDeSimbolos(TablaDeSimbolos tabla);

#endif
