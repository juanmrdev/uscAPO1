#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include "funciones.h"
#define MAXROW      10
#define MAXCOL      10

void totalSegundos(int *total, int horas, int minutos, int segundos){
	* total = horas * 3600 + minutos * 60 + segundos;    
}

void mesAnio(char nombre[],int mes, bool * birthday){
	if ( mes >= 1 && mes <= 12 )
    {
        switch ( mes )
        {
            case  1 : strcpy( nombre, "Enero" );
                      break;
            case  2 : strcpy( nombre, "Febrero" );
                      break;
            case  3 : strcpy( nombre, "Marzo" );
                      break;
            case  4 : strcpy( nombre, "Abril" );
                      break;
            case  5 : strcpy( nombre, "Mayo" );
                      break;
            case  6 : strcpy( nombre, "Junio" );
                      break;
            case  7 : strcpy( nombre, "Julio" );*birthday=true;
                      break;
            case  8 : strcpy( nombre, "Agosto" );
                      break;
            case  9 : strcpy( nombre, "Septiembre" );
                      break;
            case 10 : strcpy( nombre, "Octubre" );
                      break;
            case 11 : strcpy( nombre, "Noviembre" );
                      break;
            case 12 : strcpy( nombre, "Diciembre" );
        }
        printf( "\n   %s", nombre );
    }
    else
        printf( "\n   ERROR: Mes incorrecto." );
}

void sucesion(int i,int num){
	
    for ( i = 0 ; i < num ; i++ )
    {
        printf( "   %.f   ", pow( 10, i ) );
    }
}

void sumaPotencias(int *acumulador, int cuadrado, int numero){

	char seguir='s';

	do
    {
        printf( "\n   Introduzca un n%cmero entero: ", 163 );
        scanf( "%d", &numero);

        cuadrado = pow( numero, 2 );
        printf( "\n   %d elevado a 2 es: %d\n", numero, cuadrado );

		*acumulador += cuadrado;

        printf( "\n   %cDesea introducir otro n%cmero (s/n)?: ", 168, 163 );
        fflush( stdin );
        scanf( "%c", &seguir);
    } while ( seguir != 'n' );

}

void diagonalMatrix(int matrix[][MAXCOL],int i,int j,int r,int c,int * diagonal){
	printf("\nIngrese valores de la matriz :\n");
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            printf("Ingrese valor [%d,%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
 
    if(r==c)
    {
		int count=0;
		for(i=0;i< c;i++)
		{
			for(j=0;j< r;j++)
			{

				if(i==j){
					count++;
					printf("%d\t",matrix[j][i]);
				}
				else
					printf("\t");
			}
			printf("\n");     
		}
		*diagonal=count;
    }
    else
    {
        printf("\nLa matriz no es sim%ctrica o cuadrada",130);
    } 
}