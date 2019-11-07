//
// Created by Ivan's PC on 11/5/2019.
//

#include "ArchivoLib.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int s;
    if (argc<2){
        printf("No se paso ningun archivo");
        system("PAUSE");
        return 0;
    } else if (argc>2){
        printf("Se pasaron muchos argumentos");
        system("PAUSE");
        return 0;
    }
    s = suma(argv[1]);
    printf("La suma es %d", s);
    system("PAUSE");
}