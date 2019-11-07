//
// Created by Ivan's PC on 11/5/2019.
//

#include "../Tema4Punteros/libreriaPuntero.h"

#ifndef ISC105_ARCHIVOLIB_H
#define ISC105_ARCHIVOLIB_H
void guardar_texto();
void leer_texto();

int suma(char * ruta_archivo);

int guardar_perro_bin(char * ruta_archivo, PERRO * perros, int n);
PERRO * leer_perro_bin(char * ruta_archivo, PERRO * perros, int * n);

#endif //ISC105_ARCHIVOLIB_H
