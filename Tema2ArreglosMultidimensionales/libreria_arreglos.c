//
// Created by Ivan's PC on 9/17/2019.
//

#include "libreria_arreglos.h"
#include <stdio.h>

int suma(int arreglo[], int n){

}

int suma2( int n, int arreglo[n]){

}

int suma_matriz( int n, int m, int matriz[n][m]){

}

int suma_matriz2( int n, int m, int matriz[][TAM]){

}

int cuenta_as(char text[]){
    int i = 0, c =0;
    while (text[i]!='\0'){
        if (text[i]=='a' || text[i]=='A'){
            c++;
        }
        i++;
    }
    return c;
}

void representa_arreglo_bidimensional_en_unidimensional(){
    int c, f, i;
    int TAM_COLUMNAS = 5;
    int TAM_FILAS = 4;
    int arreglo[TAM_COLUMNAS*TAM_FILAS];
    int matriz[TAM_COLUMNAS][TAM_FILAS];
    for (int i = 0; i < TAM_COLUMNAS * TAM_FILAS; ++i) {
        c = i % TAM_COLUMNAS;
        f = (i - c) / TAM_COLUMNAS;
        matriz[c][f] = i + 1;
        arreglo[i] = i + 1;
    }

    for (int f = 0; f < TAM_FILAS; ++f) {
        for (int c = 0; c < TAM_COLUMNAS; ++c) {
            i = f * TAM_COLUMNAS + c;
            printf("Fila: %d, Columna %d, Valor %d\n", f, c, arreglo[i]);
            printf("Fila: %d, Columna %d, Valor %d\n", f, c, matriz[c][f]);
        }
    }

}

int producto_punto(int m1, int n1, int m2, int n2, int matriz1[m1][n1], int matriz2[m2][n2], int matriz_resultado[m1][n2]){
    int tmp;

    if (n1 != m2){
        return -1;
    }

    for (int i = 0; i < m1; ++i) {
        for (int j = 0; j < n2; ++j) {
            tmp = 0;
            for (int k = 0; k < n1; ++k) {
                tmp += matriz1[i][k] * matriz2[k][j];
            }
            matriz_resultado[i][j] = tmp;
        }
    }
    return 1;
}



