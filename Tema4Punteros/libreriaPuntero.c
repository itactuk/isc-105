//
// Created by Ivan's PC on 10/3/2019.
//

#include "libreriaPuntero.h"

void intercambia(int * k, int * j){
    int tmp;
    tmp = *k;
    *k = *j;
    *j = tmp;
}

// TODO Mostar ejemplo pasando matriz++
int suma_matriz(int ** matriz, int N, int M){
    int suma = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            suma += matriz[i][j];
            // Con aritmetica de puntero
            suma += *(*(matriz+i)+j);
        }
    }
    return suma;
}