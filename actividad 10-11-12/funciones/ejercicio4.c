#include <stdio.h>

//Mi librería
#include "funciones.h"

int main(int argc, char const *argv[])
{

    int acumulador=0, cuadrado,  numero;

	sumaPotencias(&acumulador,cuadrado,numero);

    printf( "\n   La suma de los cuadrados calculados es: %d", acumulador );
}

