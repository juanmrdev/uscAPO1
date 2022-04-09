#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include "facturacion.h"

//Constantes...
#define LEN(arr) ((int) (sizeof (arr) / sizeof (arr)[0]))
#define SIZE 100 //Filas y columnas
#define FILAS 5 //fila

char productos[SIZE][SIZE]={"leche","huevo","pan"};
int lecheVal=1000,huevoVal=350,panVal=500;
int total=0;

int billetes[SIZE][SIZE]={{1,50000},{1,20000},{1,10000},{1,5000},{1,2000}};	
int monedas[SIZE][SIZE]={{1,1000},{1,500},{1,200},{1,100},{1,50}};

//Esta función guarda los productos por cada cliente y muestra total ventas
int* pedidosCliente(int clientesSize,int total_inicial){
	int i,total_pagar_cliente,returnTotalCliente,restante_caja,pago_cliente,devuelta,total_venta=0;
	int clientes[clientesSize];	
	static int arrayPedidos[SIZE];
	for (i = 0; i < clientesSize; i++)
	{
		total_pagar_cliente=0;
		pago_cliente=0;
		returnTotalCliente=capturaDatos(i,total_pagar_cliente);
		printf("Con cu%cnto cancela el cliente: ",160); scanf("%d", &pago_cliente);
		total_venta+=returnTotalCliente;
		devuelta=pago_cliente-returnTotalCliente;
		total_inicial=total_inicial+pago_cliente-devuelta;
		printf("Se le devuelven $%d al cliente y quedan $%d en caja\n" ,devuelta, total_inicial);
		printf("\n");
		nominacionCliente((pago_cliente),devuelta);
	}	
	printf("\nEL TOTAL DE VENTAS FUERON $%d",total_venta);
	arrayPedidos[0]=total_venta;
	arrayPedidos[1]=total_inicial;
	return arrayPedidos;
}

//Esta función guarda en memoria el número de productos por cliente y retorna el total de cada uno
int capturaDatos(int i,int total_pagar_cliente){
	int L,H,P;	
	printf("Qu%c productos llev%c el cliente %d?\n",130,162,i+1);
	printf("Cu%cntos botes de %s llev%c:" ,160, productos[0], 162); scanf("%d",&L);
	printf("Cu%cntos %s llev%c:" ,160, productos[1], 162); scanf("%d",&H);
	printf("Cu%cntos %s llev%c:" ,160, productos[2], 162); scanf("%d",&P);
	printf("EL CLIENTE [%d] PIDI%c %d BOTES DE LECHE, %d HUEVOS Y %d PANES.\n", i+1,224,L,H,P);
	total_pagar_cliente= (L*lecheVal)+(H*huevoVal)+(P*panVal);
	printf("EL CLIENTE [%d] DEBE PAGAR UN TOTAL DE: %d\n",i+1,total_pagar_cliente);
	return total_pagar_cliente;
}

//Suma de billetes y monedas por cada nominación
int ContadorBilletesMonedasInicial(){
	int sumaBilletes_50000=billetes[0][0]*billetes[0][1],
	sumaBilletes_20000=billetes[1][0]*billetes[1][1],
	sumaBilletes_10000=billetes[2][0]*billetes[2][1],
	sumaBilletes_5000=billetes[3][0]*billetes[3][1],
	sumaBilletes_2000=billetes[4][0]*billetes[4][1],
	sumaMonedas_1000=monedas[0][0]*monedas[0][1],
	sumaMonedas_500=monedas[1][0]*monedas[1][1],
	sumaMonedas_200=monedas[2][0]*monedas[2][1],
	sumaMonedas_100=monedas[3][0]*monedas[3][1],
	sumaMonedas_50=monedas[4][0]*monedas[4][1];
	int total_inicial=sumaBilletes_50000+sumaBilletes_10000+sumaBilletes_20000+sumaBilletes_5000+sumaBilletes_2000+sumaMonedas_1000+sumaMonedas_500+sumaMonedas_200+sumaMonedas_100+sumaMonedas_50;
	printf(	"\n======================== CURRENCY ======================\n"
			"Hay [%d] billetes de $50.000 para un total de: $%d\n"
			"Hay [%d] billetes de $20.000 para un total de: $%d\n"
			"Hay [%d] billetes de $10.000 para un total de: $%d\n"
			"Hay [%d] billetes de $5.000 para un total de: 	$%d\n"
			"Hay [%d] billetes de $2.000 para un total de: 	$%d\n"
			"Hay [%d] monedas de $1.000 para un total de: 	$%d\n"
			"Hay [%d] monedas de $500 para un total de: $%d\n"
			"Hay [%d] monedas de $200 para un total de: $%d\n"
			"Hay [%d] monedas de $100 para un total de: $%d\n"
			"Hay [%d] monedas de $50 para un total de: $%d\n"
			"======================== CURRENCY ======================\n",
			billetes[0][0],sumaBilletes_50000,billetes[1][0],sumaBilletes_20000,
			billetes[2][0],sumaBilletes_10000,billetes[3][0],sumaBilletes_5000,billetes[4][0],sumaBilletes_2000,
			monedas[0][0],sumaMonedas_1000,monedas[1][0],sumaMonedas_500,
			monedas[2][0],sumaMonedas_200,monedas[3][0],sumaMonedas_100,monedas[4][0],sumaMonedas_50
		);
	return total_inicial;
}

void nominacionCliente(int pago,int devuelta){

	// int billetes[SIZE][SIZE]={{1,50000},{1,20000},{1,10000},{1,5000},{1,2000}};	
	// int monedas[SIZE][SIZE]={{1,1000},{1,500},{1,200},{1,100},{1,50}};
	int rowBilletes = FILAS;

	int rowMonedas = FILAS;

	printf("\nFILASBi %d, FILASMone %d\n",rowBilletes,rowMonedas);
	
	//Validar billetes
	for (int i = 0; i < rowBilletes; i++)
	{
		int res=devuelta/billetes[i][1];
		if (res==1)
		{
			billetes[i][0]-=1;
			devuelta=devuelta-billetes[i][1];
		}		
	}

	//Validar billetes
	for (int i = 0; i < rowBilletes; i++)
	{
		int res=devuelta/monedas[i][1];
		if (res==1)
		{
			monedas[i][0]-=1;
			devuelta=devuelta-monedas[i][1];
		}		
	}

	//Validar billetes
	for (int i = 0; i < rowMonedas; i++)
	{
		int res=pago/billetes[i][1];
		if (res==1)
		{
			billetes[i][0]+=1;
			pago=pago-billetes[i][1];
		}		
	}

	//Validar billetes
	for (int i = 0; i < rowMonedas; i++)
	{
		int res=pago/monedas[i][1];
		if (res==1)
		{
			pago=pago-monedas[i][1];
			monedas[i][0]+=1;
		}		
	}	
}




