//
// Created by Ivan's PC on 9/26/2019.
//
#include "libreriaEstructura.h"
#include "libreriaStdioEstructura.h"
#include <stdio.h>

struct casilla{
    int es_visible;
    char contenido;
    int visitado;
} c1, c2, c3, c4, c5;

int main(){
    struct Estudiante estu1;
    EST mi_estudiante; // Esta linea es equivalente a la de arriba
    int n = 3;
    struct Estudiante arreglo_estudiantes[n];
    struct Carro c1;
    CAR c2;
    ARTICULO a1;


    printf("Size of %d", sizeof(estu1.nombre));
    printf("\n");
    printf("Size of %d", sizeof(estu1.apellido));
    printf("\n");
    printf("Size of %d", sizeof(estu1.edad));
    printf("\n");
    printf("Size of %d", sizeof(estu1.sexo));
    printf("\n");
    printf("Size of %d", sizeof(estu1));
    printf("\n");

    lee_n_estudiantes(n, arreglo_estudiantes);
    imprime_n_estudiantes(n, arreglo_estudiantes);

    lee_estudiante(&estu1);
    imprime_estudiante(estu1);



}

