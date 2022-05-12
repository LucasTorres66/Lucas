/*
 * ArrayPassenger.c
 *
 *  Created on: 27 abr. 2022
 *      Author: lucas
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayPassenger.h"

int initPassengers(Passenger* list, int len){
	int retorno=0;
	int i;
	if(list!=NULL && len > 0 ){
		retorno=1;
		 	 for(i=0;i<len;i++){

		 		 list[i].isEmpty=1;
		 	 }

	}

	return retorno;

};

int addPassenger(Passenger* list, int len, int id, char name[], char lastName[], float price, int typePassenger, char flycode[] ){
	return -1;
};

int findPassengerByid(Passenger* list, int len, int id){
	return NULL;
};

int removePassenger(Passenger* list, int len, int id){
	return -1;
};

int sortPassenger(Passenger* list, int len, int order){
	return 0;
};

int printPassenger(Passenger* list, int lenght){
	int retorno=0;
		int i;
		if(list!=NULL && lenght > 0 ){
			retorno=1;
			 	 for(i=0;i<lenght;i++){
			 		 printf("Estado = %d",list[i].isEmpty);
			 	 }

		}

		return retorno;
	return 0;
};

int sortPassengerByCode(Passenger* list, int len, int order){
	return 0;
};
