//
// Created by Ivan's PC on 9/26/2019.
//

#ifndef ISC105_LIBRERIAESTRUCTURA_H
#define ISC105_LIBRERIAESTRUCTURA_H

struct Estudiante{
    char nombre[50];
    char apellido[60];
    int edad;
    char sexo;
};

typedef struct Estudiante EST;
typedef int ENTERO;

// Esto es todo en uno. Define la struct Carro y crea un typedef
typedef struct Carro{
    char nombre[20];
    char marca[20];
    int ano;
    int codigo;
} CAR;

typedef struct {
    char nombre[10];
    float precio;
    int cantidad;
} ARTICULO;

#endif //ISC105_LIBRERIAESTRUCTURA_H
