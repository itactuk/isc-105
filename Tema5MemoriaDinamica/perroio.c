//
// Created by Ivan's PC on 10/22/2019.
//

#include "perroio.h"
#include "perrodinamico.h"
#include <stdio.h>
#include <stdlib.h>

PERRO leer_perro(){
    // TODO: Arreglar %s sin reservacion de memoria
    int digitar_padre = 0;
    int digitar_madre = 0;
    PERRO p;
    printf("Digite la raza :");
    scanf("%s", p.raza); //  r.raza = leer string;
    printf("\n");
    printf("Digite la edad:");
    scanf("%d", &p.edad);
    printf("\n");
    printf("Digite el nombre:");
    scanf("%s", p.nombre);
    printf("\n");
    printf("Digite el color:");
    scanf("%s", p.color);
    printf("\n");
    printf("Digitar padre?[0-No, otro sí]:");
    scanf("%d", &digitar_padre);
    if (digitar_padre){
        p.padre = (PERRO*)malloc(sizeof(PERRO));
        *(p.padre) = leer_perro();
    } else{
        p.padre = NULL;
    }
    printf("\n");
    printf("Digitar madre?[0-No, otro sí]:");
    scanf("%d", &digitar_madre);
    if (digitar_madre){
        p.madre = (PERRO*)malloc(sizeof(PERRO));
        *(p.madre) = leer_perro();
    } else{
        p.madre = NULL;
    }
    printf("\n");
    printf("Digite el :");
    scanf("%d", &p.n_hijos);
    printf("\n");
    p.hijos = (PERRO *) malloc(sizeof(PERRO) * p.n_hijos);
    for (int i = 0; i < p.n_hijos; ++i) {
        printf("Leyendo el hijo %d\n", i+1);
        p.hijos[i] = leer_perro();
    }
    printf("\n");
}