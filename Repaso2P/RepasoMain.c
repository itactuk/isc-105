//
// Created by Ivan's PC on 11/14/2019.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
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