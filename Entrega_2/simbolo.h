#ifndef FFF_TIPOS_H
#define FFF_TIPOS_H
#include "nombresDeTipos.h"
#include "tiposDeVariables.h"

#define MAX_SID 50

typedef struct listaSID{
    int nodos[MAX_SID];
    int cantidad;
} ListaSID;

typedef ListaSID Tupla; 

typedef struct tablas{
    ListaSID listaSID;
    int limiteInferior;
    int limiteSuperior;
} Tabla;

typedef union infoVariable{
    Tabla tabla;
    Tupla tupla;
} InfoVariable;

typedef enum tiposSimbolo {
    VARIABLE,
    CONSTANTE,
    TEMPORAL
} TiposSimbolo;

typedef struct variable {
    NombreDeTipoT tipo;
    TipoDeVariable tipoDeVariable;
    InfoVariable info;
} Variable;

typedef LiteralT Constante;

#endif