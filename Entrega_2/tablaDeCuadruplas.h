#ifndef FFF_TABLA_DE_CUADRUPLAS_H
#define FFF_TABLA_DE_CUADRUPLAS_H

#include <stdbool.h>
#include "literal.h"
#include "nombresDeOperadores.h"

typedef struct CeldaCuadrupla {
    NombreDeOperador operador;
    LiteralT operando_1;
    LiteralT operando_2;
    LiteralT resultado;
} CeldaCuadrupla;

typedef struct TablaDeCuadruplas {
    CeldaCuadrupla cuadruplas[100];
    int ultima;
} TablaDeCuadruplas;

TablaDeCuadruplas nuevaTablaDeCuadruplas(void);
void insertarEnTablaDeCuadruplas(TablaDeCuadruplas *tabla, NombreDeOperador operador, LiteralT operando_1, LiteralT operando_2);
void imprimeTablaDeCuadruplas(TablaDeCuadruplas tabla);

#endif