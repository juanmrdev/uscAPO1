#include <conio.h>
#include <stdio.h>

//Mi librería
#include "funciones.h"

int main(int argc, char const *argv[])
{
    int horas, minutos, segundos;
	int total=0;

    printf( "\n   Introduzca horas: " );scanf( "%d", &horas );
    printf( "\n   Introduzca minutos: " );scanf( "%d", &minutos );
    printf( "\n   Introduzca segundos: " );scanf( "%d", &segundos );

   totalSegundos(&total, horas, minutos, segundos); 
   printf( "\n   Desde las 0:0:0 horas han pasado %d segundos.", total );
}

