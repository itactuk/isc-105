cmake_minimum_required(VERSION 3.14)

project(isc105 C)

set(CMAKE_C_STANDARD 99)

include_directories(includes)
add_executable(mainFuncionCuadratica Tema1Funciones/mainFuncionCuadratica.c Tema1Funciones/funcioncuadratica.c Tema1Funciones/funcioncuadratica.h)
add_executable(minunitCuadratica Tema1Funciones/minunitCuadratica.c Tema1Funciones/funcioncuadratica.c Tema1Funciones/funcioncuadratica.h)