#ifndef FFF_TIPOS_H
#define FFF_TIPOS_H
#include "nombresDeTipos.h"
#include "tiposDeVariables.h"
#include "listaIdentificadores.h"
typedef struct tupla {
    NombreDeTipoT tipo;
    ListaIdentificadoresT listaDeIdentificadores;
} Tupla;

typedef struct tabla {
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