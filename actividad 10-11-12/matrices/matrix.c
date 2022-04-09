#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include "matrix.h"

#define FILAS 100 //Filas
#define COLS 100 //Columnas
#define SIZE 100 //Filas y columnas

//IMPRIMIR MATRÍZ 
void show(int matriz[][SIZE],int N,int M){
	int i,j;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			printf("%8d", matriz[i][j]);
		}
		printf("\n");
	}	
}

//(1)FUNCIÓN PARA SUMA DE FILAS
void sumaFila(int matriz[][COLS], int N, int M){
	int i,j;
	
	for (i = 0; i < N; i++)
	{
		int sumaFila=0;
		for (j = 0; j < M; j++)
		{
			sumaFila=sumaFila+matriz[i][j];
		}
		printf("La suma de la fila %d es %d\n", i+1, sumaFila);
	}	
}

//(1)FUNCIÓN PARA SUMA DE COLUMAS
void sumaColumna(int matriz[][COLS], int N, int M){
	int i,j;
	
	for (j = 0; j < M; j++)
	{
		int sumaColumna=0;
		for (i = 0; i < N; i++)
		{
			sumaColumna=sumaColumna+matriz[i][j];
		}
		printf("La suma de la columna %d es %d\n", j+1, sumaColumna);
	}	
}

//(2)FUNCIÓN PARA SUMA DE MATRICEZ
void sumaMatriz(int matrizA[][COLS],int matrizB[][COLS], int N, int M){
	int matrizResultado[FILAS][COLS],i,j;
	for (i = 0; i < N; i++)
	{
		
		for (j = 0; j < M; j++)
		{
			matrizResultado[i][j]=matrizB[i][j]+matrizA[i][j];
		}

	}
	show(matrizResultado,N,M);
}

//(3)FUNCIÓN PARA MULTIPLICAR MATRICEZ
void multiplicacionMatriz(int matrizA[][COLS],int matrizB[][COLS], int N, int M, int P){
	int matrizResultado[FILAS][COLS],i,j,k;
	for (i = 0; i < N; i++)
	{		
		for (j = 0; j < P; j++)
		{
			matrizResultado[i][j]=0;
			for (k = 0; k < M; k++)
			{
				matrizResultado[i][j]+=matrizA[i][k]*matrizB[k][j];
			}		
		}
	}
	show(matrizResultado,N,P);
}

//IMPRIMIR MATRÍZ CON DECIMALES
void printFloat(float matriz[][COLS], int P) {
	int i,j;

    for (i = 0; i < P; i++) {
		for (j = 0; j < P; j++)
		{
        printf("%10.2f", matriz[i][j]);
		}
		printf("\n");
    }
}

//IMPRIMIR MATRÍZ PUNTO 4
void show4(float matriz[][COLS],int P){
	int i,j;

	for (i = 0; i < P; i++)
	{
		for (j = 0; j < P; j++)
		{
			printf("%8.0f ", matriz[i][j]);
		}
		printf("\n");
	}	
}

//(4)FUNCIÓN PARA INVERTIR MATRÍZ
void matrizInversa(float matrizA[][COLS],float matrizId[][COLS], int P, float pivote, float aux){
	int i,j,k;

	for (i = 0; i < P; i++)
	{		
		pivote=matrizA[i][i];

		for (k = 0; k < P; k++)
		{
			matrizA[i][k]=(matrizA[i][k])/pivote;
			matrizId[i][k]=(matrizId[i][k])/pivote;
		}

		for (j = 0; j < P; j++)
		{
			if (i != j)
			{
				aux=matrizA[j][i];

				for (k = 0; k < P; k++)
				{
					matrizA[j][k] = matrizA[j][k]-aux*matrizA[i][k];
					matrizId[j][k] = matrizId[j][k]-aux*matrizId[i][k];
				}					
			}			
		}				
	}
	printf("La matriz A se convierte en la identidad: \n");
	show4(matrizA,P);
	printf("\n");
	printf("Resultado inversa: \n");
	printFloat(matrizId,P);
}

//(5)FUNCIÓN PARA TRANSPONER MATRÍZ 
void trans(int matrizA[][SIZE], int N,int M){
	int matrizResultado[SIZE][SIZE],i,j,k;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			matrizResultado[j][i]=matrizA[i][j];
		}
	}
	show(matrizResultado,N,M);	 	
}

//(6)fUNCIÓN PARA CALCULAR POTENCIA DE MATRÍZ 
void power(int matrizA[][SIZE], int N,int M,int potencia){
	int matrizResultado[SIZE][SIZE],matrizResultado_3[SIZE][SIZE],matrizResultado_4[SIZE][SIZE],matrizResultado_5[SIZE][SIZE];
	int i,j,k;
	
	if (potencia==2)
	{
		/* code */
	}
	
	for (i = 0; i < N; i++)
	{		
		for (j = 0; j < M; j++)
		{
			matrizResultado[i][j]=0;
			for (k = 0; k < M; k++)
			{
				matrizResultado[i][j]+=matrizA[i][k]*matrizA[k][j];
			}		
		}
	}
	
	for (i = 0; i < N; i++)
	{		
		for (j = 0; j < M; j++)
		{
			matrizResultado_3[i][j]=0;
			for (k = 0; k < M; k++)
			{
				matrizResultado_3[i][j]+=matrizResultado[i][k]*matrizA[k][j];
			}		
		}
	}

	for (i = 0; i < N; i++)
	{		
		for (j = 0; j < M; j++)
		{
			matrizResultado_4[i][j]=0;
			for (k = 0; k < M; k++)
			{
				matrizResultado_4[i][j]+=matrizResultado_3[i][k]*matrizA[k][j];
			}		
		}
	}

	for (i = 0; i < N; i++)
	{		
		for (j = 0; j < M; j++)
		{
			matrizResultado_5[i][j]=0;
			for (k = 0; k < M; k++)
			{
				matrizResultado_5[i][j]+=matrizResultado_4[i][k]*matrizA[k][j];
			}		
		}
	}

	//Resultados según la potencia
	switch (potencia)
	{
	case 2:
		show(matrizResultado,N,M);
		break;
	case 3:
		show(matrizResultado_3,N,M);
		break;
	case 4:
		show(matrizResultado_4,N,M);
		break;
	case 5:
		show(matrizResultado_5,N,M);
		break;	
	default:
		show(matrizA,N,M);
		break;
	}			 	
}

//(7)fUNCIÓN PARA COMPROBAR SI LA MATRÍZ ES SIMÉTRICA
void symmetrical(int matrizA[][SIZE], int N,int M){
	int matrizResultado[SIZE][SIZE],i,j,k;
	bool simetrica= true;
	if (N!=M)
	{
		simetrica=false;
	}else{
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < M; j++)
			{
				if (matrizA[i][j]==matrizA[j][i])
				{
					simetrica=true;
				}else{
					simetrica=false;
				}				
			}
		}
	}

	if (simetrica)
	{
		printf("VERDADERO");
	}else{
		printf("FALSO");
	}		
}