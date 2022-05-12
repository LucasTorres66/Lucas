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
#define AMOUNT_PASSENGER 3


int main(void) {

	Passenger PassengerList[AMOUNT_PASSENGER];
	int i;
	initPassengers(PassengerList,AMOUNT_PASSENGER);
	printPassenger(PassengerList,AMOUNT_PASSENGER);

	return EXIT_SUCCESS;
}
