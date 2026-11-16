#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tablaDeTipos.h"

TablaDeTipos nuevaTablaDeTipos(void) {
    return NULL;
}

bool insertar(TablaDeTipos *tabla, char *nombre,
              LiteralT literal, bool esConstante) {

    for (CeldaTipo *celda = *tabla; celda != NULL; celda = celda->sig) {
        if (strcmp(celda->nombre, nombre) == 0) {
            if (!esConstante && !celda->esConstante &&
                celda->valor.tipoDelValor == literal.tipoDelValor) {
                return true;
            }
            fprintf(stderr, "Ya existe un elemento llamado %s en la tabla de tipos\n",
                    nombre);
            return false;
        }
    }
    CeldaTipo * celda;
    if ((celda = (CeldaTipo *) malloc(sizeof(CeldaTipo))) == NULL) {
            printf("No hay memoria para una celda de la tabla de constantes");
            exit(1);
    }
    celda->valor = literal;
    celda->nombre = nombre;
    celda->esConstante = esConstante;
    celda->sig = *tabla;
    *tabla = celda;
    return true;
}

static const char *nombreTipo(NombreDeTipoT tipo) {
    switch (tipo) {
        case BOOLEANO: return "Booleano";
        case CADENA:   return "Cadena";
        case CARACTER: return "Caracter";
        case ENTERO:   return "Entero";
        case REAL:     return "Real";
    }
    return "Desconocido";
}

void imprimeTabla(TablaDeTipos tabla){
    CeldaTipo * aux = tabla;
    if (tabla == NULL) 
        printf("La tabla de constantes est vaca\n");
    else {
        printf("El contenido de la tabla de constantes es.\n");
        printf("Nombre\t\tTipo\t\tValor\n");
        while (aux != NULL){
            printf("%s\t\t", aux->nombre);
            escribeLiteral(aux->valor);
            aux = aux ->sig;
        }
    }
}
