#ifndef FFF_LISTA_IDENTIFICADORES_H
#define FFF_LISTA_IDENTIFICADORES_H

typedef struct nodoIdentificador {
    char *nombre;
    struct nodoIdentificador *sig;
} NodoIdentificador;

typedef NodoIdentificador *ListaIdentificadores;

ListaIdentificadores nuevaListaIdentificadores(char *nombre);
ListaIdentificadores anadirIdentificador(ListaIdentificadores lista, char *nombre);
void liberaListaIdentificadores(ListaIdentificadores lista);

#endif