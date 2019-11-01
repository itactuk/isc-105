//
// Created by Ivan's PC on 9/19/2019.
//

#include <stdio.h>

int main(){
    int seguir = 1;
    int acc = 0;
    int numero;

    do{
        printf("Digite n%cmero: ", 163);
        scanf("%d", &numero);
        acc += numero;
        printf("\n");

        do{
            printf("Quiere seguir digitando? (1-S%c, 0-No) ", 161);
            scanf("%d", &seguir);
            if (seguir!=0 && seguir!=1){
                printf("Opci%cn no valida. Vuelva a digitar. ", 162);
            }
            printf("\n");
        }while (seguir!=0 && seguir!=1);
    }while (seguir!=0);

    printf("La suma de los n%cmeros digitados es %d", 163, acc);
}