#ifndef FFF_TIPOS_H
#define FFF_TIPOS_H
#include "nombresDeTipos.h"

typedef enum tiposSimbolo {
    VARIABLE,
    CONSTANTE
} TiposSimbolo;

typedef NombreDeTipoT Variable;

typedef LiteralT Constante;

typedef struct listaDeVariables  { 
    int inicio;
    int fin;
} ListaDeVariables;

#endif