//
// Created by Ivan Tactuk on 9/19/2019.
//

#include <minunit.h>

#include "Primo.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_2) {
    mu_assert_int_eq(1, EsPrimo(2));
}

MU_TEST(test_numero_primo) {
    mu_assert_int_eq(1, EsPrimo(7));
}

MU_TEST(test_numero_no_primo) {
    mu_assert_int_eq(0, EsPrimo(9));
}

MU_TEST(test_numero_grande) {
    mu_assert_int_eq(0, EsPrimo(8000));
}

MU_TEST(test_Arreglo) {
    int arreglo[] = {1, 24, 54, 7};
    int n = sizeof(arreglo)/ sizeof(int);
    invierte_arreglo(arreglo, n);

    mu_assert_int_eq(7, arreglo[0]);
    mu_assert_int_eq(54, arreglo[1]);
    mu_assert_int_eq(24, arreglo[2]);
    mu_assert_int_eq(1, arreglo[2]);
}

MU_TEST(test_Arreglo2) {
    int arreglo[] = {1, 24, 54, 7};
    int n = sizeof(arreglo)/ sizeof(int);
    int arreglo_original [n];
    for (int i = 0; i < n; ++i) {
        arreglo_original[i] = arreglo[i];
    }
    invierte_arreglo(arreglo, n);
    for (int j = 0; j < n; ++j) {
        mu_assert_int_eq(arreglo_original[n-j-1], arreglo[j]);
    }
}



MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_2);
    MU_RUN_TEST(test_numero_primo);
    MU_RUN_TEST(test_numero_no_primo);
    MU_RUN_TEST(test_numero_grande);

    MU_RUN_TEST(test_Arreglo);
    MU_RUN_TEST(test_Arreglo2);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}