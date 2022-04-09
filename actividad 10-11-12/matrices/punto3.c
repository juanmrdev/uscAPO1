#include <stdio.h>

//Mi librería
#include "matrix.h"

#define FILAS 100 //Filas
#define COLS 100 //Columnas

int main(int argc, char const *argv[])
{
	int matrizA[FILAS][COLS],matrizB[FILAS][COLS],i,j,N,M,P;
	printf("Matriz 1:\n");
	printf("Cantidad de filas: "); scanf("%d", &N);
	printf("Cantidad de columnas: "); scanf("%d", &M);
	printf("Matriz 2:\n");
	printf("Cantidad de columnas: "); scanf("%d", &P);

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			printf("ingrese valor para matriz 1[%d][%d]: " ,i,j);
			scanf("%d", &matrizA[i][j]);
		}
	}	

	for (i = 0; i < M; i++)
	{
		for (j = 0; j < P; j++)
		{
			printf("ingrese valor para matriz 2[%d][%d]: " ,i,j);
			scanf("%d", &matrizB[i][j]);
		}
	}	

	printf("\n");
	show(matrizA,N,M);
	printf("\n");
	show(matrizB,M,P);
	printf("\n");
	printf("El producto entre Matriz 1 X Matriz 2 es:\n");
	multiplicacionMatriz(matrizA,matrizB,N,M,P);

}


