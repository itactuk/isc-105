//
// Created by Ivan's PC on 9/10/2019.
//

#include "minunit.h"
#include "funcioncuadratica.h"

#define MINUNIT_EPSILON 1E-3

MU_TEST(test_numeros_positivos) {
    mu_assert_double_eq(0.618, valor_x_positivo(1.0, 1.0,-1.0));
    mu_assert_double_eq(-1.618, valor_x_negativo(1.0, 1.0,-1.0));
}

MU_TEST(test_valor_entero) {
    mu_assert_double_eq(-1, valor_x_positivo(1.0, 2.0,1.0));
    mu_assert_double_eq(-1, valor_x_negativo(1.0, 2.0,1.0));
}


MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_numeros_positivos);
    MU_RUN_TEST(test_valor_entero);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}

