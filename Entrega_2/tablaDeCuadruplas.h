#ifndef FFF_TABLA_DE_CUADRUPLAS_H
#define FFF_TABLA_DE_CUADRUPLAS_H

#include <stdbool.h>
#include "literal.h"

typedef struct CeldaCuadrupla {
    NombreDeOperador operador;
    LiteralT operando_1;
    LiteralT operando_2;
    LiteralT resultado;
    struct CeldaCuadrupla *sig; 
} CeldaCuadrupla;

typedef CeldaCuadrupla *TablaDeCuadruplas;

TablaDeCuadruplas nuevaTablaDeCuadruplas(void);
bool insertarEnTablaDeCuadruplas(TablaDeCuadruplas *tabla, NombreDeOperador operador, LiteralT operando_1, LiteralT operando_2);
void imprimeTablaDeCuadruplas(TablaDeCuadruplas tabla);


#endif