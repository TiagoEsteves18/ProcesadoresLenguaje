#ifndef FFF_TABLA_DE_CUADRUPLAS_H
#define FFF_TABLA_DE_CUADRUPLAS_H

#include "tablaDeSimbolos.h"

#define MAX_CUADRUPLAS 500
#define VACIO -1

// Son enteros porque son los sid de la tabla de simbolos, que son enteros
typedef struct CeldaCuadrupla {
    char *operador;
    int operando_1;
    int operando_2;
    int resultado;
    struct CeldaCuadrupla *sig; 
} CeldaCuadrupla;

typedef struct tablaDeCuadruplas {
    CeldaCuadrupla cuadruplas[MAX_CUADRUPLAS];
    int siguiente;
} TablaDeCuadruplas;

TablaDeCuadruplas nuevaTablaDeCuadruplas(void);
int gen(TablaDeCuadruplas *tabla, char *operador, int operando1, int operando2, int resultado);
void imprimeTablaDeCuadruplas(TablaDeCuadruplas tabla, TablaDeSimbolos ts);
void escribeCodigoIntermedio(FILE *f, TablaDeCuadruplas tabla, TablaDeSimbolos ts);
void generarCodigoIntermedio(TablaDeCuadruplas tabla, TablaDeSimbolos ts);

#endif