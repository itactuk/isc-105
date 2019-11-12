//
// Created by Ivan's PC on 11/12/2019.
//

#ifndef ISC105_LISTAS_SIMPLEMENTEENLAZADA_LIB_H
#define ISC105_LISTAS_SIMPLEMENTEENLAZADA_LIB_H

typedef int Valor;
typedef struct Nodo {
    Valor dato;
    struct Nodo * siguiente ;
} NODO ;


NODO * NuevoNodo (Valor x);
void InsertarCabezaLista(NODO** cabeza, Valor entrada);
void InsertarLista(NODO* anterior, Valor entrada);
NODO* BuscarLista (NODO* cabeza, Valor destino);
NODO* BuscarPosicion(NODO* cabeza, int posicion);
void eliminar (NODO** cabeza, Valor entrada);
void InsertaOrden(NODO** cabeza, Valor entrada);
void recorrer(NODO* cabeza, void (*procesar) (Valor v) );

#endif //ISC105_LISTAS_SIMPLEMENTEENLAZADA_LIB_H
