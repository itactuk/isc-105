//
// Created by Ivan's PC on 9/10/2019.
//

#include "libreriaCantVar.h"
#include <stdarg.h>

int suma_pares(int n, ...){
    int suma = 0;
    int tmp;

    va_list lista;
    va_start(lista, n);
    for (int i = 0; i < n; ++i) {
        tmp = va_arg(lista, int);
        if (tmp%2 == 0){
            suma += tmp;
        }
    }
    va_end(lista);
    return suma;
}