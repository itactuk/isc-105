//
// Created by Ivan's PC on 11/5/2019.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArchivoLib.h"


void guardar_texto(){
    FILE * pf;
    char buff[255];
    const char *ruta_archivo = "my_primer_archivo.txt";
    int valor = 10;
    pf = fopen(ruta_archivo, "w+");
    if (pf == NULL){
        fgets(buff, 255, stderr);
        printf("%s", buff);
        return;
    }
    fprintf(pf, "Mi texto %d", valor);
    fclose(pf);
}
void leer_texto(){
    FILE * pf;
    char buff[255];
    const char *ruta_archivo = "my_primer_archivo.txt";
    int valor = 10;
    pf = fopen(ruta_archivo, "w+");
    if (pf == NULL){
        fgets(buff, 255, stderr);
        printf("%s", buff);
        return;
    }
    fprintf(pf, "Mi texto %d", valor);
    fclose(pf);
}

int suma(char * ruta_archivo){
    FILE * pf;
    int n;
    int valor, suma=0;
    char buff[255];
    pf = fopen(ruta_archivo, "r");
    if (pf == NULL){
        fgets(buff, 255, stderr);
        printf("%s", buff);
        return 0;
    }
    fscanf(pf, "%d", &n);
    for (int i = 0; i < n; ++i) {
        fscanf(pf, "%d", &valor);
        suma += valor;
    }
    fclose(pf);
    return suma;
}

int guardar_perro_bin(char * ruta_archivo, PERRO * perros, int n){
    FILE * pf;
    pf = fopen(ruta_archivo, "w+");
    if (pf==NULL){
        return 0;
    }
    fwrite(&n, sizeof(int), 1, pf);
    fwrite(perros, sizeof(PERRO), n, pf);
    for (int i = 0; i < n; ++i) {
        fwrite(perros[i].raza, sizeof(char), 255, pf);
        fwrite(perros[i].color, sizeof(char), 255, pf);
        fwrite(perros[i].nombre, sizeof(char), 255, pf);
    }
    fclose(pf);
    return 1;
}
PERRO * leer_perro_bin(char * ruta_archivo, int * n){
    FILE * pf;
    PERRO * perros;
    char buff[255];
    pf = fopen(ruta_archivo, "r");
    fread(n, sizeof(int), 1, pf);
    perros = (PERRO *) malloc(*n * sizeof(PERRO));
    fread(perros, sizeof(PERRO), n, pf);
    for (int i = 0; i < n; ++i) {
        fread(buff, sizeof(char), 255, pf);
        perros[i].raza = (char *) malloc((strlen(buff)+1) * sizeof(char));
        strcpy(perros[i].raza, buff);

        fread(buff, sizeof(char), 255, pf);
        perros[i].color = (char *) malloc((strlen(buff)+1) * sizeof(char));
        strcpy(perros[i].color, buff);

        fread(buff, sizeof(char), 255, pf);
        perros[i].nombre = (char *) malloc((strlen(buff)+1) * sizeof(char));
        strcpy(perros[i].nombre, buff);

    }
    fclose(pf);
}

