//
// Created by Ivan's PC on 10/22/2019.
//

#include "perrodinamico.h"
#include <stdlib.h>

PERRO * agregar(PERRO * arreglo_perros, int* cantidad_actual, PERRO * perro_a_agregar){
    if (arreglo_perros==NULL){
        (*cantidad_actual)=1;
        arreglo_perros = (PERRO *) malloc((*cantidad_actual) * sizeof(PERRO));
        *arreglo_perros = *perro_a_agregar;
    } else{
        (*cantidad_actual)++;
        arreglo_perros = (PERRO *) realloc(arreglo_perros, (*cantidad_actual) * sizeof(PERRO));
        arreglo_perros[(*cantidad_actual)-1] = *perro_a_agregar;
    }
    return arreglo_perros;
}

void libera_arreglo_perro(PERRO * arreglo_perros, int n){
    if (arreglo_perros==NULL) return;
    for (int i = 0; i < n; ++i) {
        libera_arreglo_perro(arreglo_perros[i].padre, 1);
        libera_arreglo_perro(arreglo_perros[i].madre, 1);
        libera_arreglo_perro(arreglo_perros[i].hijos, arreglo_perros[i].n_hijos);
    }
    free(arreglo_perros);
}

#include <string.h>
PERRO * buscar_pariente(PERRO * perro, char * nombre_pariente){
    if (perro==NULL) return NULL;
    if (strcmp(perro->nombre, nombre_pariente)) return perro;
    if (perro->padre == NULL && perro->madre==NULL) return NULL;
    PERRO * pariente_madre;
    PERRO * pariente_padre;
    pariente_madre = buscar_pariente(perro->madre, nombre_pariente);
    pariente_padre = buscar_pariente(perro->padre, nombre_pariente);
    if (pariente_madre == NULL) return pariente_padre;
    return pariente_madre;
}