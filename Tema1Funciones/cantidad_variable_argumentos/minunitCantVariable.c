//
// Created by Ivan's PC on 9/10/2019.
//

#include "minunit.h"
#include "libreriaCantVar.h"

MU_TEST(test_suma_todos) {
    mu_assert_int_eq(6, suma_pares(2, 2, 4));
}

MU_TEST(test_suma_con_impares) {
    mu_assert_int_eq(2, suma_pares(2, 2, 3));
}

MU_TEST(test_suma_con_negativos) {
    mu_assert_int_eq(-2, suma_pares(2, 2, -4));
}

MU_TEST(test_suma_muchos) {
    mu_assert_int_eq(12, suma_pares(6, 2, 3, 4, 6, 7, 9));
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_suma_todos);
    MU_RUN_TEST(test_suma_con_impares);
    MU_RUN_TEST(test_suma_con_negativos);
    MU_RUN_TEST(test_suma_muchos);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}

