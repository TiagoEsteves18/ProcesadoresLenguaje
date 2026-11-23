#include <stdio.h>
#include <stdlib.h>
#include "listaIdentificadores.h"

ListaIdentificadores nuevaListaIdentificadores(char *nombre) {
    ListaIdentificadores lista;
    lista.cantidad = 0;
    return anadirIdentificador(lista, nombre);
}

ListaIdentificadores anadirIdentificador(ListaIdentificadores lista, char *nombre) {
    if (lista.cantidad >= MAX_IDENTIFICADORES) {
        printf("No hay memoria para más identificadores\n");
        exit(1);
    }
    lista.nodos[lista.cantidad] = nombre;
    lista.cantidad++;
    return lista;
}
/*
void liberaListaIdentificadores(ListaIdentificadores lista) {
    while (lista != NULL) {
        NodoIdentificador *sig = lista->sig;
        free(lista);
        lista = sig;
    }
}*/