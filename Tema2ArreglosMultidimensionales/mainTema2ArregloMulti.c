//
// Created by Ivan's PC on 9/17/2019.
//

#include <stdio.h>
#include "libreria_arreglos.h"

int main(int argc, char ** argv){
    int matriz1[][2] = {
            {2, 4},
            {6, 7}
    };
    int matriz2[][2] = {
            {5, 6},
            {7, 8}
    };
    int matriz_r[2][2];
    producto_punto(2, 2, 2, 2, matriz1, matriz2, matriz_r);

    char nombre[] = "Diego";
    char otro_nombre[]={
            'D', 'i', 'e', 'g', 'o', '\0'
    };
    char otro_segundo_nombre[6] = "Diego"; // Se usa 6 por el caracter nulo

    int precios[5]; // Declarar arreglo
    int tablero_ajedrez[8][8]; // Declarar arreglo
    int tablero_damas[8][8]={
            {1,2,3,4,5,6,7,8},
            {1,2,3,4,5,6,7,8},
            {1,2,3,4,5,6,7,8},
            {1,2,3,4,5,6,7,8},
            {1,2,3,4,5,6,7,8},
            {1,2,3,4,5,6,7,8},
            {1,2,3,4,5,6,7,8},
            {1,2,3,4,5,6,7,8},
    };
    int tablero_nuevo[8][8]={1,2,3,4,5,6,7,8,1,2,3,4,5,6,7,8,1,2,3,4,5,6,7,8,1,2,3,4,5,6,7,8,1,2,3,4,5,6,7,8,1,2,3,4,5,6,7,8,1,2,3,4,5,6,7,8,1,2,3,4,5,6,7,8};

    precios[2] = 1; // Asignar valores a un arreglo unidimensional
    precios[5] = 1;

    int edades[]={25, 18, 17}; // Inicializar el arreglo
    int n;

    representa_arreglo_bidimensional_en_unidimensional();
    representa_arreglo_bidimensional_en_unidimensional_basado_filas();

    printf("Digite cantidad de elementos: ");
    scanf("%d", &n);
    double arreglo_de_tamano_variable[n];
    for (int i = 0; i < n; ++i) {
        arreglo_de_tamano_variable[i] = 2;
    }
    printf("\n");

}