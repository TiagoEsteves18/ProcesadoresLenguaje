#include <stdio.h>
#include <stdlib.h>
#include "listaIdentificadores.h"

ListaIdentificadores nuevaListaIdentificadores(char *nombre) {
    return anadirIdentificador(NULL, nombre);
}

ListaIdentificadores anadirIdentificador(ListaIdentificadores lista, char *nombre) {
    NodoIdentificador *nodo;
    if ((nodo = (NodoIdentificador *) malloc(sizeof(NodoIdentificador))) == NULL) {
        printf("No hay memoria para la lista de identificadores\n");
        exit(1);
    }
    nodo->nombre = nombre;
    nodo->sig = lista;
    return nodo;
}

void liberaListaIdentificadores(ListaIdentificadores lista) {
    while (lista != NULL) {
        NodoIdentificador *sig = lista->sig;
        free(lista);
        lista = sig;
    }
}