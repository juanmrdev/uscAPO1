#include <stdio.h>

//Mi librería
#include "matrix.h"
#define SIZE 100 //Filas y columnas

int main(int argc, char const *argv[])
{	
	int i,j,N,M,potencia;
	int matrizA[SIZE][SIZE];

	printf("Matriz size:\n");
	printf("Cantidad de filas N: "); scanf("%d", &N);
	printf("Cantidad de columnas M: "); scanf("%d", &M);
	
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			printf("ingrese valor para matriz 1[%d][%d]: " ,i,j);
			scanf("%d", &matrizA[i][j]);		
		}
	}	
	
	printf("\n");
	show(matrizA,N,M);
	printf("\n");
	printf("La matriz 1 es simetrica?\n");
	symmetrical(matrizA,N,M);

}





