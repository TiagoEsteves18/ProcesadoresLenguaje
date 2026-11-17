#include "literal.h" 
#include "nombresDeTipos.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

LiteralT nuevoLiteralBooleano(ValorBooleanoT valor){
    LiteralT l;
    l.tipoDelValor = BOOLEANO;
    l.valor.valorBooleano = valor;
    return l;
}

LiteralT nuevoLiteralCadena(char * valor){
    LiteralT l;
    l.tipoDelValor = CADENA;
    if ((l.valor.valorCadena = strdup(valor)) == NULL){
        printf("\t\t Literal.c: No hasy memoria para crear la constante %s\n", valor);
        exit(1);
    }
    return l;
}

LiteralT nuevoLiteralCaracter(char valor){
    LiteralT l;
    l.tipoDelValor = CARACTER;
    l.valor.valorCaracter = valor;
    return l;
}

LiteralT nuevoLiteralEntero(int valor){
    LiteralT l;
    l.tipoDelValor = ENTERO;
    l.valor.valorEntero = valor;
    return l;
}

LiteralT nuevoLiteralReal(float valor){
    LiteralT l;
    l.tipoDelValor = REAL;
    l.valor.valorReal = valor;
    return l;
}

void escribeLiteral(LiteralT l){
    switch (l.tipoDelValor) {
        case ENTERO:   printf("%-15s %d\n", "Entero", l.valor.valorEntero); break;
        case REAL:     printf("%-15s %f\n", "Real", l.valor.valorReal); break;
        case CADENA:   printf("%-15s %s\n", "Cadena", l.valor.valorCadena); break;
        case CARACTER: printf("%-15s %c\n", "Caracter", l.valor.valorCaracter); break;
        case BOOLEANO: printf("%-15s %s\n", "Booleano", l.valor.valorBooleano ? "Verdadero" : "Falso"); break;
    }
}


