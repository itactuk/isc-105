//
// Created by Ivan's PC on 10/3/2019.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libreriaPuntero.h"


void declara_structura_y_organiza();
int funcion_comparar(const void * ptr_v1, const void * ptr_v2);

int main(){
    int * valor = NULL;
    void * mi_valor;
    int * entero_ptr;
    entero_ptr = (int *) mi_valor;
//    printf("%d", *mi_valor); // un puntero a void no permite aritmetica de punteros
    printf("%d", *entero_ptr);
    int arreglo[] = {1,2,3,4,5,6};
    int *ptr_arr;
    int a=1;
    int c=2;
    int *b = &a; // En este caso el * se utiliza para declarar un puntero
    int *q;
    q = &c;
    printf("%d", *b); // En este caso el * se usar para obtener el valor de la direccion a la que apunta b
    printf("La multiplicacion de los valores de b es %d", (*b) * (*b));
    ptr_arr = arreglo;

    // Aritmetica de punteros
    printf("%d\n", arreglo[0]);
    printf("%d\n", ptr_arr[0]);
    printf("%d\n", arreglo[1]);
    printf("%d\n", ptr_arr[1]);
    printf("%d\n", *(ptr_arr+1));// Ese +1 equivale a sumar 1 * sizeof(int)

    printf("%d\n", sizeof(int));
    printf("%d\n", ptr_arr);
    printf("%d\n", ptr_arr+1);
    ptr_arr++; // Si es valido
    // arreglo++; no es valido
}

void declara_structura_y_organiza(){
    PERRO perro1;
    perro1.nombre = "Doggy";
    perro1.edad = 1;
    perro1.color = "Negro";
    perro1.hijos = NULL;
    perro1.n_hijos = 0;
    perro1.madre = NULL;
    perro1.padre = NULL;
    perro1.raza = "Viralata";
    PERRO perro2;
    perro2.nombre = "Firulais";
    perro2.edad = 2;
    perro2.color = "Blanco";
    perro2.hijos = NULL;
    perro2.n_hijos = 0;
    perro2.madre = &perro1;
    perro2.padre = NULL;
    perro2.raza = "Viralata";
    PERRO perros [] = {perro1, perro2};

    int (*ptr_funcion_comparar)(const void *, const void *) = NULL;
    ptr_funcion_comparar =  funcion_comparar;
//    ptr_funcion_comparar(2,2); son expresiones equivalentes
//    funcion_comparar(2,2);
    qsort(perros, 2, sizeof(PERRO), ptr_funcion_comparar);
}

int funcion_comparar(const void * ptr_v1, const void * ptr_v2){
    PERRO * p1 = (PERRO*) ptr_v1;
    PERRO * p2 = (PERRO*) ptr_v2;

    int res_cmp = strcmp((*p1).nombre, (*p2).nombre);
    if (res_cmp!=0){
        return res_cmp;
    }
    // p1->nombre; esto es equivalente a (*p1).nombre
    if (p1->padre==p2->padre && p1->madre == p2->madre){
        return 0;
    }
    // Hay que verificar si uno es null o no y determinar quien tiene prioridad. Si el padre o la madre

}
