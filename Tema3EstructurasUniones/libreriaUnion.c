//
// Created by Ivan's PC on 10/1/2019.
//

#include "libreriaUnion.h"
#include <stdio.h>

void decodifica(struct byte b, char c){
    /* Los campos de bits se alinean de derecha a izquierda, por esa razón se
escriben los campos en orden inverso */
    printf ("%2u%2u%2u%2u%2u%2u%2u%2u - %c(%d) \n",
    b.h, b.g, b.f, b.e, b.d, b.c, b.b, b.a, c, c);

}
