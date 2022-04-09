#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include "facturacion.h"



int main(int argc, char const *argv[])
{	
	//getchar();
	int total_inicial=ContadorBilletesMonedasInicial();
		
	printf("\n[[LA CAJA EMPIEZA CON $%d]]\n",total_inicial);
	int clientesSize;

	printf("\n");
	printf("Cu%cntos clientes atendi%c hoy?: ",160,162); scanf("%d", &clientesSize);

	int* returTotalVentas=pedidosCliente(clientesSize,total_inicial);
	printf("\nEL DINERO INICIAL ERA  $ %d\n", returTotalVentas[1]-returTotalVentas[0]);
	ContadorBilletesMonedasInicial();
	printf("\n[[EL CIERRE DE CAJA FINAL ES]] {{{ $%d}}}\n", returTotalVentas[1]);
	
}




