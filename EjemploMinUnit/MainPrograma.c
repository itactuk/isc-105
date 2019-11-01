//
// Created by Ivan's PC on 9/19/2019.
//

#include <stdio.h>
#include "Primo.h"

int main(){
    int n;
    printf("Digite numero: ");
    scanf("%d", &n);

    if (EsPrimo(n)){
        printf("Es primo");
    } else{
        printf("No es primo");
    }
}

