#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tablaDeCuadruplas.h"

TablaDeCuadruplas nuevaTablaDeCuadruplas(void){
    TablaDeCuadruplas tabla;
    tabla.siguiente = 0;
    return tabla;
}

bool insertarEnTablaDeCuadruplas(TablaDeCuadruplas *tabla, NombreDeOperador operador, LiteralT operando_1, LiteralT operando_2) {
    return true
}

static char *nombreDeOperador(NombreDeOperador op) {
    switch (op) {
        case SUMA:            return "+";
        case RESTA:           return "-";
        case POR:             return "*";
        case DIVISION:        return "/";
        case DIVISION_ENTERA: return "div";
        case MODULO:          return "mod";
        case MAYOR:           return ">";
        case MENOR:           return "<";
        case IGUAL:           return "=";
        case DISTINTO:        return "<>";
        case MAYOR_IGUAL:     return ">=";
        case MENOR_IGUAL:     return "<=";
        case NO:              return "no";
        case MAS_UNIT:        return "+ unit";
        case MENOS_UNIT:      return "- unit";
        case O:               return "o";
        case Y:               return "y";
        default:              return "?";
    }
}

static void escribeOperando(int sid, TablaDeSimbolos ts) {
    if (sid == VACIO)
        printf("%-12s ", "-");
    else
        printf("%-12s ", ts.celdas[sid].nombre);
}

void imprimeTablaDeCuadruplas(TablaDeCuadruplas tabla, TablaDeSimbolos ts) {
    if (tabla.siguiente == 0) {
        printf("La tabla de cuadruplas esta vacia\n");
        return;
    }
    printf("=== CONTENIDO DE LA TABLA DE CUADRUPLAS ===\n");
    printf("%-5s %-10s %-12s %-12s %s\n", "N", "Operador", "Operando 1", "Operando 2", "Resultado");
    printf("-------------------------------------------------------\n");
    for (int i = 0; i < tabla.siguiente; i++) {
        Cuadrupla c = tabla.cuadruplas[i];
        printf("%-5d %-10s ", i, nombreDeOperador(c.operador));
        escribeOperando(c.operando1, ts);
        escribeOperando(c.operando2, ts);
        else if (c.resultado == VACIO){}
            printf("-\n");
        else
            printf("%s\n", ts.celdas[c.resultado].nombre);
    }
    printf("=======================================================\n");
}