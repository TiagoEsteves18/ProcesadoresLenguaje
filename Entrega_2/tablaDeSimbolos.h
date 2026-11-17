#ifndef FFF_TABLA_DE_SIMBOLOS_H
#define FFF_TABLA_DE_SIMBOLOS_H

#include "nombresDeTipos.h"
#include <stdbool.h>
#include "literal.h"
#include "simbolo.h"

#define MAX_CELDA 100

typedef union valorCelda {
    Variable variable;
    Constante constante;
} ValorCelda;

typedef struct celdaSimbolo {
    int sid;
    char *nombre;
    TiposSimbolo tipoSimbolo;
    ValorCelda valorCelda;
} CeldaSimbolo;

typedef struct TablaDeSimbolos{
    CeldaSimbolo celdas[MAX_CELDA];
    int ultimo;
} TablaDeSimbolos;

TablaDeSimbolos nuevaTablaDeSimbolos(void);

int insertarConstanteTS(TablaDeSimbolos *tabla, char *nombre, ValorCelda valorCelda);

int insertarVariableTS(TablaDeSimbolos *tabla, char *nombre, Variable variable);
int insertarLiteralTS(TablaDeSimbolos *tabla, LiteralT literal);
bool valorEnteroDeSimbolo(TablaDeSimbolos *tabla, int sid, int *valor);

int buscarSimbolo(TablaDeSimbolos *tabla, char *nombre);

int nuevoTemporal(TablaDeSimbolos *tabla, NombreDeTipoT tipo);
NombreDeTipoT tipoDeSimbolo(TablaDeSimbolos *tabla, int sid);

void imprimeTablaDeSimbolos(TablaDeSimbolos tabla);

#endif
