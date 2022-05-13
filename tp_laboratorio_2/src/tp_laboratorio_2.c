/*
 ============================================================================
 Name        : tp_laboratorio_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayPassenger.h"
#include "UTN.h"
#define AMOUNT_PASSENGER 9


int main(void) {

	int opcion;
	Passenger PassengerList[AMOUNT_PASSENGER];
	initPassengers(PassengerList,AMOUNT_PASSENGER);
	forcedData(PassengerList,AMOUNT_PASSENGER);
	//pedirDatos(PassengerList);
	//removePassenger(PassengerList,AMOUNT_PASSENGER,9);
	//printPassenger(PassengerList,AMOUNT_PASSENGER);
	do{
		printf("Elija una opcion");
		printf("Elija una opcion");
		scanf("%d",&opcion);


	}while(opcion != 5);

	return EXIT_SUCCESS;
}
