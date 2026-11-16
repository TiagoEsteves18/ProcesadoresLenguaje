#ifndef FFF_TABLA_DE_SIMBOLOS_H
#define FFF_TABLA_DE_SIMBOLOS_H

#include <stdbool.h>
#include "literal.h"

typedef struct celdaSimbolo {
    char *nombre;
    LiteralT valor;
    bool esConstante;
    struct celdaSimbolo *sig; 
} CeldaSimbolo;

typedef CeldaSimbolo *TablaDeSimbolos;

TablaDeSimbolos nuevaTablaDeSimbolos(void);
bool insertar(TablaDeSimbolos *tabla, char *nombre, LiteralT literal, bool esConstante);
void imprimeTabla(TablaDeSimbolos tabla);

#endif
