#ifndef FFF_TIPOS_H
#define FFF_TIPOS_H
#include "nombresDeTipos.h"
#include "tiposDeVariables.h"

typedef enum tiposSimbolo {
    VARIABLE,
    CONSTANTE
} TiposSimbolo;

typedef struct variable {
    NombreDeTipoT tipo;
    TipoDeVariable tipoDeVariable;
    int limiteInferior;
    int limiteSuperior;
} Variable;

typedef LiteralT Constante;

#endif