#include <stdio.h>

//Mi librería
#include "matrix.h"

#define FILAS 100 //Filas
#define COLS 100 //Columnas

int main(int argc, char const *argv[])
{	
	int i,j,P;
	float matrizA[FILAS][COLS],matrizId[FILAS][COLS],pivote,aux;

	printf("Matriz size:\n");
	printf("Cantidad de filas y columnas NXM: "); 
	scanf("%d", &P);

	for (i = 0; i < P; i++)
	{
		for (j = 0; j < P; j++)
		{

			printf("ingrese valor para matriz 1[%d][%d]: " ,i,j);
			scanf("%f", &matrizA[i][j]);

			//Construcción de matriz identidad		
			if (i==j){
				matrizId[i][j] = 1;
			}else{
				matrizId[i][j]=0;
			}			
		}
	}		
	printf("\n");
	show4(matrizA,P);
	printf("\n");
	show4(matrizId,P);
	printf("\n");
	printf("La inversa de la matriz es:\n");
	matrizInversa(matrizA,matrizId,P,pivote,aux);
}




