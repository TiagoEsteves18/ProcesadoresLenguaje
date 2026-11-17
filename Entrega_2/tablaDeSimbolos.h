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
int insertarVariableTS(TablaDeSimbolos *tabla, char *nombre, NombreDeTipoT tipo);

void ponerTipo(TablaDeSimbolos *tabla, int sid, NombreDeTipoT tipo);
int buscarSimbolo(TablaDeSimbolos *tabla, char *nombre);

void imprimeTablaDeSimbolos(TablaDeSimbolos tabla);

#endif
