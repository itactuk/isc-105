//
// Created by Ivan's PC on 9/17/2019.
//

#ifndef ISC105_LIBRERIA_ARREGLOS_H
#define ISC105_LIBRERIA_ARREGLOS_H

#define TAM 8

int suma(int arreglo[], int n);
int suma2( int n, int arreglo[n]);

int suma_matriz( int n, int m, int matriz[n][m]);
int suma_matriz2( int n, int m, int matriz[][TAM]);

void representa_arreglo_bidimensional_en_unidimensional();
int cuenta_as(char text[]);

int producto_punto(int m1, int n1, int m2, int n2, int matriz1[][n1], int matriz2[][n2], int matriz_resultado[m1][n2]);

void representa_arreglo_bidimensional_en_unidimensional_basado_filas();

#endif //ISC105_LIBRERIA_ARREGLOS_H
