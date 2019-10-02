//
// Created by Ivan's PC on 10/1/2019.
//

#include "libreriaOrdenamiento.h"


int ordena_burbuja(int n, int arr[]){
    int k, tmp;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 -i; ++j) {
            k = j + 1;
            if (arr[j]>arr[k]){
                // Intercambia
                tmp = arr[j];
                arr[j] = arr[k];
                arr[k] = tmp;
            }
        }
    }
}