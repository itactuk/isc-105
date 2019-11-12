//
// Created by Ivan's PC on 11/12/2019.
//

#include "listas_simplementeenlazada_lib.h"
#include <stdlib.h>

NODO * NuevoNodo (Valor x){
    NODO * nuevo_nodo = (NODO *) malloc(sizeof(NODO));
    nuevo_nodo->dato = x;
    return nuevo_nodo;
}


void InsertarCabezaLista(NODO** cabeza, Valor entrada){
    NODO * nuevo_nodo =  NuevoNodo(entrada);
    if (*cabeza==NULL){
        *cabeza = nuevo_nodo;
        (*cabeza)->siguiente = NULL;
    } else{
        nuevo_nodo->siguiente = *cabeza;
        *cabeza = nuevo_nodo;
    }
}