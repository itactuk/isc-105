//
// Created by Ivan's PC on 10/29/2019.
//

#include "htmlExtraer.h"
#include <string.h>
#include <stdlib.h>

EXTRAIDO extraer_parrafos(char * texto){
    char * p_inicial, *p_final;
    int tamano;
    EXTRAIDO resultado;
    resultado.textos = NULL;
    resultado.n = 0;
    p_inicial = texto;
    do{
        p_inicial = strstr(p_inicial, "<p>");
        if (p_inicial==NULL) break;
        p_inicial+=3;
        tamano = 0;
        p_final = p_inicial;
        while (strncmp(p_final, "</p>", 4)){
            tamano++;
            p_final++;
        }
        resultado.n++;
        if (resultado.textos==NULL){
            resultado.textos = (char **) malloc(resultado.n * sizeof(char *));
        } else{
            resultado.textos = (char **) realloc(resultado.textos, resultado.n * sizeof(char *));
        }
        resultado.textos[resultado.n-1] = (char*) malloc((tamano+1)* sizeof(char));
        strncpy(resultado.textos[resultado.n-1], p_inicial, tamano);
        resultado.textos[resultado.n-1][tamano] = '\0';

    }while (p_inicial);
    return resultado;
}