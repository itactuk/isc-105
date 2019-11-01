//
// Created by Ivan's PC on 10/29/2019.
//

#ifndef ISC105_HTMLEXTRAER_H
#define ISC105_HTMLEXTRAER_H

typedef struct extraido{
    char ** textos;
    int n;
} EXTRAIDO;

EXTRAIDO extraer_parrafos(char * texto);

#endif //ISC105_HTMLEXTRAER_H
