//
// Created by Ivan's PC on 9/10/2019.
//

#include <math.h>
#include "funcioncuadratica.h"


double valor_x_positivo(double a, double b, double c){
    double x = (-b + sqrt(pow(b,2)-4.0*a*c))/(2.0*a);
    return x;
}

double valor_x_negativo(double a, double b, double c){
    double x = (-b - sqrt(pow(b,2)-4.0*a*c))/(2.0*a);
    return x;
}