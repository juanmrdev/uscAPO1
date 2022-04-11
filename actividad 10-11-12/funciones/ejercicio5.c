#include <stdio.h>

//Mi librería
#include "funciones.h"
 
#define MAXROW      10
#define MAXCOL      10
 
int main(int argc, char const *argv[])
{
    int matrix[MAXROW][MAXCOL];
    int i,j,r,c;
	int diagonal=0;
     
    printf("Ingrese n%cmero de filas :",163);
    scanf("%d",&r);
    printf("Ingrese n%cmero de columnas :",163);
    scanf("%d",&c);
	diagonalMatrix (matrix, i, j, r, c,&diagonal);
	printf("\nHay %d diagonales.",diagonal);

}