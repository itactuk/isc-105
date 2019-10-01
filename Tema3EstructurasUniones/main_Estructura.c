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

struct tablero_buscaminas{
    int n;
    int m;
    struct casilla casillas[1000][1000];
};

#include "libreriaUnion.h"
int main(){
    struct byte b;
    union charbits caracter;
    for (char i = 'a'; i < 'z'; ++i) {
        caracter.ch = i;
        decodifica(caracter.bits, i);
    }

    caracter.bits.a=0;
    caracter.bits.b=0;
    caracter.bits.c=0;
    caracter.bits.d=0;
    caracter.bits.e=0;
    caracter.bits.f=0;
    caracter.bits.g=0;
    caracter.bits.h=0;

    caracter.bits.a=1;
    caracter.bits.b=1;
    caracter.bits.c=1;
    caracter.bits.d=1;
    caracter.bits.e=1;
    caracter.bits.f=1;
    caracter.bits.g=1;
    caracter.bits.h=1;

    struct Estudiante estu1;
    EST mi_estudiante; // Esta linea es equivalente a la de arriba
    int n = 3;
    struct Estudiante arreglo_estudiantes[n];
    struct Carro c1;
    CAR c2;
    ARTICULO a1;


    printf("Size of %llu", sizeof(estu1.nombre));
    printf("\n");
    printf("Size of %llu", sizeof(estu1.apellido));
    printf("\n");
    printf("Size of %llu", sizeof(estu1.edad));
    printf("\n");
    printf("Size of %llu", sizeof(estu1.sexo));
    printf("\n");
    printf("Size of %llu", sizeof(estu1));
    printf("\n");

    lee_n_estudiantes(n, arreglo_estudiantes);
    imprime_n_estudiantes(n, arreglo_estudiantes);

    lee_estudiante(&estu1);
    imprime_estudiante(estu1);

}

