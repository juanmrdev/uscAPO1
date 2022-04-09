#include <stdio.h>
#include <math.h>

//Mi librería
#include "matrix.h"

#define FILAS 100 //Filas
#define COLS 100 //Columnas

int main(int argc, char const *argv[])
{
	int matriz[FILAS][COLS],i,j,N,M;
	printf("Cantidad de filas: "); scanf("%d", &N);
	printf("Cantidad de columnas: "); scanf("%d", &M);
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			matriz[i][j] = rand() % 100;
		}
	}	
	show(matriz,N,M);
	sumaFila(matriz,N,M);
	sumaColumna(matriz,N,M);
}


