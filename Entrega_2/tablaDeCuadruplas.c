#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tablaDeSimbolos.h"

TablaDeCuadruplas nuevaTablaDeCuadruplas(void){
    TablaDeCuadruplas tabla;
    tabla.ultimo = 0;
    return tabla;
}

bool insertarEnTablaDeCuadruplas(TablaDeCuadruplas *tabla, NombreDeOperador operador, LiteralT operando_1, LiteralT operando_2) {
    return true
}

void imprimeTablaDeCuadruplas(TablaDeCuadruplas tabla) {
    if (tabla == NULL) {
        printf("La tabla de cuádruplas esta vacia\n");
        return;
    }
    printf("=== CONTENIDO DE LA TABLA DE CUÁDRUPLAS ===\n");
    printf("%-20s %-15s %-10s %s\n", "Operador", "Operando 1", "Operando 2", "Resultado");
    printf("-----------------------------------------------\n");
    CeldaCuádrupla *aux = tabla;
    while (aux != NULL) {
        printf("%-20s ", aux->nombre);
        escribeLiteral(aux->valor);
        aux = aux->sig;
    }
    printf("===============================================\n");
}