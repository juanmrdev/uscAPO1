#ifndef _MATRIX_H_
#define _MATRIX_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>

#define FILAS 100 //Filas
#define COLS 100 //Columnas
#define SIZE 100 //Filas y columnas

/*Esta función muestra las matrices en consola*/
void show(int matriz[][SIZE],int ,int );

/*Estas funciones hace parte del punto 1 de las actividades 9-10-11*/
void sumaFila(int matriz[][COLS], int , int );
void sumaColumna(int matriz[][COLS], int , int );

/*Esta función hace parte del punto 2 de las actividades 9-10-11*/
void sumaMatriz(int matrizA[][COLS],int matrizB[][COLS], int , int );

/*Esta función hace parte del punto 3 de las actividades 9-10-11*/
void multiplicacionMatriz(int matrizA[][COLS],int matrizB[][COLS], int , int , int );

/*Estas funciones hace parte del punto 4 de las actividades 9-10-11*/
void printFloat(float matriz[][COLS], int );
void show4(float matriz[][COLS],int );
void matrizInversa(float matrizA[][COLS],float matrizId[][COLS], int , float , float);

/*Esta función hace parte del punto 5 de las actividades 9-10-11*/
void trans(int matrizA[][SIZE], int ,int );

/*Esta función hace parte del punto 6 de las actividades 9-10-11*/
void power(int matrizA[][SIZE], int ,int ,int );

/*Esta función hace parte del punto 7 de las actividades 9-10-11*/
void symmetrical(int matrizA[][SIZE], int ,int );

#endif //_MATRIX_H_
