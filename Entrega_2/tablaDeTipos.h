#ifndef FFF_TABLA_DE_TIPOS_H
#define FFF_TABLA_DE_TIPOS_H

#include <stdbool.h>
#include "literal.h"

typedef struct celdaTipo {
    char *nombre;
    LiteralT valor;
    bool esConstante;
    struct celdaTipo *sig; 
} CeldaTipo;

typedef CeldaTipo *TablaDeTipos;

TablaDeTipos nuevaTablaDeTipos(void);
bool insertar(TablaDeTipos *tabla, char *nombre, LiteralT literal, bool esConstante);
void imprimeTabla(TablaDeTipos tabla);

#endif
