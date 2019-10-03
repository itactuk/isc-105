//
// Created by Ivan's PC on 10/3/2019.
//

#include <stdio.h>

int main(){
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