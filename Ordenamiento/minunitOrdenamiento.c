//
// Created by Ivan Tactuk on 10/1/2019.
//

#include <minunit.h>

#include "libreriaOrdenamiento.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_Intercalado) {
    ARTÍCULO arr_art[] ={ {"Pan", "1", 12.3}, {"Agua", "2", 1.1}, {"Leche", "1", 2.2}, };
    ARTÍCULO res= busca_id(arr_art, 3, 2);

    mu_assert_string_eq("Agua", res.nombre);
    mu_assert_string_eq("2", res.id);
    mu_assert_double_eq(1.1, res.precio);
}

MU_TEST(test_Ordenado) {
    int arr[] = {2, 3, 7, 8};
    int n = sizeof(arr)/ sizeof(int);
    ordena_burbuja(n, arr);
    mu_assert_int_eq(arr[0], 2);
    mu_assert_int_eq(arr[1], 3);
    mu_assert_int_eq(arr[2], 7);
    mu_assert_int_eq(arr[3], 8);
}

MU_TEST(test_OrdenInverso) {
    int arr[] = {8, 7, 3, 2};
    int n = sizeof(arr)/ sizeof(int);
    ordena_burbuja(n, arr);
    mu_assert_int_eq(arr[0], 2);
    mu_assert_int_eq(arr[1], 3);
    mu_assert_int_eq(arr[2], 7);
    mu_assert_int_eq(arr[3], 8);
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_Ordenado);
    MU_RUN_TEST(test_Intercalado);
    MU_RUN_TEST(test_OrdenInverso);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}

