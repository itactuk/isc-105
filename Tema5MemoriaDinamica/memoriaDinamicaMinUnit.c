//
// Created by Ivan Tactuk on 10/22/2019.
//

#include <minunit.h>

#include "perrodinamico.h"
#include "../Tema4Punteros/libreriaPuntero.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_NombrePrueba) {
    int cantidad_actual = 2;
    PERRO * arreglo_perros = (PERRO *) malloc(cantidad_actual * sizeof(PERRO));
    arreglo_perros[0].raza = "Chiguagua";
    arreglo_perros[0].edad = 3;
    arreglo_perros[0].nombre = "Cesar";
    arreglo_perros[0].color = "Blanco";
    arreglo_perros[0].padre = NULL;
    arreglo_perros[0].madre = NULL;
    arreglo_perros[0].hijos = NULL;
    arreglo_perros[0].n_hijos = 0;

    arreglo_perros[1].raza = "Dalmatan";
    arreglo_perros[1].edad = 1;
    arreglo_perros[1].nombre = "Nicol";
    arreglo_perros[1].color = "Dorado";
    arreglo_perros[1].padre = NULL;
    arreglo_perros[1].madre = NULL;
    arreglo_perros[1].hijos = NULL;
    arreglo_perros[1].n_hijos = 0;

    PERRO a_agregar = {"Pastor aleman", 2, "Sebastian", "Marron", NULL, NULL, NULL, 0 };
    arreglo_perros = agregar(arreglo_perros, &cantidad_actual, &a_agregar);
    mu_assert_int_eq(cantidad_actual, 3);
    mu_assert_int_eq(arreglo_perros[2].nombre[0], 'S');
    mu_assert_int_eq(arreglo_perros[2].edad, 2);
    mu_assert_int_eq(arreglo_perros[2].raza[0], 'P');
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_NombrePrueba);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}