#include <stdio.h>

//Mi librería
#include "matrix.h"

#define FILAS 100 //Filas
#define COLS 100 //Columnas

int main(int argc, char const *argv[])
{
	int matrizA[FILAS][COLS],matrizB[FILAS][COLS],i,j,N,M;
	printf("Cantidad de filas: "); scanf("%d", &N);
	printf("Cantidad de columnas: "); scanf("%d", &M);
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			matrizA[i][j] = rand() % 100;
			matrizB[i][j] = rand() % 100;
		}
	}	
	printf("\n");
	show(matrizA,N,M);
	printf("\n");
	show(matrizB,N,M);
	printf("\n");
	printf("La suma entre la Matriz 1 y la Matriz 2 es:\n");
	sumaMatriz(matrizA,matrizB,N,M);

}

