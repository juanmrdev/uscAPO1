#include <string.h>

//Mi librería
#include "funciones.h"

int main(int argc, char const *argv[])
{
    char nombre[12];
	bool birthday=false;
    int mes;

    printf( "\n   Introduzca mes del a%co: ", 164 );
    scanf( "%d", &mes );
	
	mesAnio(nombre,mes,&birthday);
	if (birthday)
	{
		printf(	"\n   Yo cumplo a%cos en este mes ",164);
	}	
}