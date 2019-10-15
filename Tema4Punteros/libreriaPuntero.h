//
// Created by Ivan's PC on 10/3/2019.
//

#ifndef ISC105_LIBRERIAPUNTERO_H
#define ISC105_LIBRERIAPUNTERO_H

void intercambia(int * k, int * j);
int suma_matriz(int ** matriz, int N, int M);

typedef struct perro {
    char * raza;
    int edad;
    char * nombre;
    char * color;
    struct perro * padre;
    struct perro * madre;
    struct perro * hijos;
    int n_hijos;
} PERRO;

#endif //ISC105_LIBRERIAPUNTERO_H
