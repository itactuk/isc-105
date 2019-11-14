//
// Created by Ivan's PC on 11/14/2019.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * leer(){
    char * cad = NULL;
    int i = 0;
    char c;

    while ( (c=getchar())!='\n'){
        if (i>0){
            cad = (char*) realloc(cad, (i+2)* sizeof(char));
        } else{
            cad = (char*) malloc((i+2)* sizeof(char));
        }
        if (cad==NULL) return NULL;
        cad[i++] = c;
    }
    if (cad){
        cad[i] = '\0';
    }
    return cad;
}

char ** leerncad(int n){
    char ** cad = NULL;
    for (int j = 0; j < n; ++j) {
        if (j>0){
            cad = (char**) realloc(cad, (j+2)* sizeof(char*));
        } else{
            cad = (char**) malloc((j+2)* sizeof(char*));
        }
        if (cad==NULL) return NULL;
        printf("Digite cadena %d ", j);
        cad[j] = leer();
        printf("\n");
    }
    return cad;
}

int main(){
    int n; char ** arrcads;
    char ** arrcadmod;
    char * ptresp;
    printf("Cuantas cadenas leera?");
    n = atoi(leer());
    printf("\n");
    arrcads = leerncad(n);
    arrcadmod = (char **)malloc(n* sizeof(char*));
    for (int i = 0; i < n; ++i) {
        arrcadmod[i] = (char*) malloc(strlen(arrcads[i])* sizeof(char));
        strcpy(arrcadmod[i], arrcads[i]);
    }

    for (int j = 0; j < n; ++j) {
        ptresp = arrcadmod[j];
        while ((ptresp = strstr(ptresp, " "))!=NULL) {
            strcpy(ptresp, ptresp + 1);
            arrcadmod[j] = (char *) realloc(arrcadmod[j], (strlen(arrcadmod[j])+1) * sizeof(char));
        }
    }

    for (int k = 0; k < n; ++k) {
        printf("Cadena %d leida: %s\n", k+1, arrcads[k]);
        printf("Cadena %d modificada: %s\n", k+1, arrcadmod[k]);
    }

}

int main2(){
    char *  texto = "56A<valor>5847</valor>4897<valor>87</valor>5445ggg";
    char * ei = "<valor>";
    char * ef = "</valor>";
    int tam_ei = strlen(ei);
    char * ptr_inicio;
    char * ptr_fin;
    char ** listado_cad = NULL;
    int cant = 0;
    int tmp;
    ptr_inicio = texto;

    while ( (ptr_inicio=strstr(ptr_inicio, ei))!= NULL){
        ptr_inicio += tam_ei;
        ptr_fin = strstr(ptr_inicio, ef);
        if (ptr_fin==NULL){
            break;
        }
        if (listado_cad==NULL){
            listado_cad = (char **) malloc( 1 * sizeof(char*));
        } else {
            listado_cad = (char **) realloc(listado_cad, (cant+1) * sizeof(char*));
        }
        tmp = ptr_fin - ptr_inicio;
        listado_cad[cant] = (char *) malloc( (tmp+1) * sizeof(char));
        strncpy(listado_cad[cant], ptr_inicio, tmp);
        listado_cad[cant][tmp] = '\0';
        cant++;

    }
    for (int i = 0; i < cant; ++i) {
        printf("%s\n", listado_cad[i]);
    }
}