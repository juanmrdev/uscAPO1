#ifndef _FUNCIONES_H_
#define _FUNCIONES_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#define MAXROW      10
#define MAXCOL      10

void totalSegundos(int *, int , int , int );
void mesAnio(char nombre[],int,bool *);
void sucesion(int,int);
void sumaPotencias(int *acumulador,int ,int);
void diagonalMatrix(int matrix[][MAXCOL],int i,int j,int r,int c,int *);

#endif //_FUNCIONES_H_