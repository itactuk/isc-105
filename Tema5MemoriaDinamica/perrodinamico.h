//
// Created by Ivan's PC on 10/22/2019.
//

#include "../Tema4Punteros/libreriaPuntero.h"

#ifndef ISC105_PERRODINAMICO_H
#define ISC105_PERRODINAMICO_H

PERRO * agregar(PERRO * arreglo_perros, int* cantidad_actual, PERRO * perro_a_agregar);

void libera_arreglo_perro(PERRO * arreglo_perros, int n);

PERRO * buscar_pariente(PERRO * perro, char * nombre_pariente);

#endif //ISC105_PERRODINAMICO_H
