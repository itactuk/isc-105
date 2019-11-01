//
// Created by Ivan Tactuk on 10/29/2019.
//

#include <minunit.h>

#include "htmlExtraer.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_NombrePrueba) {
    char * html = "<html>\n<head>\n<title>hola</title>\n</head>\n<body><p>palabra1</p>\n<p>otro parrafo</p>\n</body>\n<\html";
    EXTRAIDO res = extraer_parrafos(html);
    mu_assert_int_eq(2, res.n);
    mu_assert_string_eq("palabra1", res.textos[0]);
    mu_assert_string_eq("otro parrafo", res.textos[1]);
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_NombrePrueba);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}