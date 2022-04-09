#include <stdio.h>
#define SIZE 100

void mostrarMatriz(int matriz[][SIZE],int filas, int columnas);
int main(int argc, char const *argv[]){
	int matriz[SIZE][SIZE],i,j,filas,columnas;
	int cont=0;

	printf("Digite el numero de FILAS: "); scanf("%d", &filas);
	printf("Digite el numero de COLUMNAS: "); scanf("%d", &columnas);

	for (i = 0; i < filas; i++)
	{
		for (j = 0; j < columnas; j++)
		{
			cont+=1;
			matriz[i][j]=cont;
		}	
	}	
	mostrarMatriz(matriz,filas,columnas);		
}

void mostrarMatriz(int matriz[][SIZE],int filas, int columnas){
	for (int z = 0; z < filas; z++)
	{
		for (int w = 0; w< columnas; w++)
		{
			printf("%8d", matriz[z][w]);
		}
		printf("\n");
	}
}