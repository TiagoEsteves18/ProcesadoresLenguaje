#ifndef FFF_LISTA_IDENTIFICADORES_H
#define FFF_LISTA_IDENTIFICADORES_H

#define MAX_IDENTIFICADORES 50

typedef char *NodoIdentificador;

typedef struct listaIdentificadores{
    NodoIdentificador nodos[MAX_IDENTIFICADORES];
    int cantidad;
} ListaIdentificadores;

typedef struct listaSID{
    int nodos[MAX_IDENTIFICADORES];
    int cantidad;
} ListaSID;

ListaIdentificadores nuevaListaIdentificadores(char *nombre);
ListaIdentificadores anadirIdentificador(ListaIdentificadores lista, char *nombre);
void liberaListaIdentificadores(ListaIdentificadores lista);

ListaSID nuevaListaSID();
ListaSID anadirSID(ListaSID lista, int sid);

#endif