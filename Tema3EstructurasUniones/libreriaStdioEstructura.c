//
// Created by Ivan's PC on 9/26/2019.
//

#include "libreriaStdioEstructura.h"
#include "libreriaEstructura.h"
#include <stdio.h>

void lee_estudiante(struct Estudiante *estu1) {
    printf("Digite el nombre: ");
    scanf("%s", (*estu1).nombre);
    printf("\n");

    printf("Digite el apellido: ");
    scanf("%s", (*estu1).apellido);
    printf("\n");

    printf("Digite la edad: ");
    scanf("%d", &(*estu1).edad);
    printf("\n");

    fflush(stdin);
    printf("Digite el sexo: ");
    scanf("%c", &(*estu1).sexo);
    printf("\n");
}

void imprime_estudiante(struct Estudiante estu1) {
    printf("El nombre del estudiante es: %s", estu1.nombre);
    printf("\n");
    printf("El apellido del estudiante es: %s", estu1.apellido);
    printf("\n");
    printf("La edad del estudiante es: %d", estu1.edad);
    printf("\n");
    printf("El sexo del estudiante es: %c", estu1.sexo);
    printf("\n");
}

void lee_n_estudiantes(int n, const struct Estudiante *arreglo_estudiantes) {
    for (int i = 0; i < n; ++i) {
        printf("Digite la informaci%cn para el estudiante #%d\n", 162, i + 1);
        lee_estudiante(&arreglo_estudiantes[i]);
        /*
         * Este es el mismo codigo que de la funcion para que vean como se usan los miembros para un arreglo de struct
        printf("Digite el nombre: ");
        scanf("%s", arreglo_estudiantes[i].nombre);
        printf("\n");

        printf("Digite el apellido: ");
        scanf("%s", arreglo_estudiantes[i].apellido);
        printf("\n");

        printf("Digite la edad: ");
        scanf("%d", arreglo_estudiantes[i].edad);
        printf("\n");

        fflush(stdin);
        printf("Digite el sexo: ");
        scanf("%c", arreglo_estudiantes[i].sexo);
        printf("\n");
         */
    }
}

void imprime_n_estudiantes(int n, const struct Estudiante *arreglo_estudiantes) {
    for (int i = 0; i < n; ++i) {
        printf("Informaci%cn del estudiante #%d\n", 162, i + 1);
        imprime_estudiante(arreglo_estudiantes[i]);
        printf("\n");
    }
}