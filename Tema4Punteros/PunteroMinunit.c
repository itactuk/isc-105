//
// Created by Ivan Tactuk on 10/3/2019.
//

#include <minunit.h>
#include "libreriaPuntero.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_NombrePrueba) {
    int a = 2;
    int b = 3;
    intercambia(&a, &b);
    mu_assert_int_eq(3, a);
    mu_assert_int_eq(2, b);
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_NombrePrueba);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}