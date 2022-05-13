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
#include "UTN.h"
int forcedData(Passenger* List,int len){
int i;
 int retorno = -1;
 char name[][51] = {"Jacob","Michael","Ethan","William","Emily","Ava","Olivia","Emma","Andrew"};
 char  lastName[][51] = {"Novak","Connor","Lum","Forbis","Green","King","White","Stone","Garfield"};
 float price [10]={2000,3000,4000,5000,6000,7000,8000,9000};

 for(i=0;i<len;i++){

	 strcpy(List[i].name, name[i]);
	 strcpy(List[i].lastName, lastName[i]);
	 List[i].price = price[i];
	 List[i].id = i+1;
	 List[i].isEmpty=0;
 }


 return retorno;
};

void printOnePassenger(Passenger list){
printf("%5d %10s %10s %10.2f %10s\n", list.id,
		                               list.name,
		                               list.lastName,
		                               list.price,
		                               list.flycode);



};

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
int pedirDatos(Passenger* list){
	Passenger buffer;
	 myGets(buffer.name,20,"Ingrese nombre");
	 myGets(buffer.lastName,20,"Ingrese lastName");
	 myGets(buffer.flycode,20,"ingrese flycode");
	 addPassenger(list,9,3,buffer.name,buffer.lastName,25000,250,buffer.flycode);
	return 0;
}
int addPassenger(Passenger* list, int len, int id, char name[], char lastName[], float price, int typePassenger, char flycode[] ){



	return -1;

};

int findPassengerByid(Passenger* list, int len, int id){
	return NULL;
};

int removePassenger(Passenger* list, int len, int id){
	int resp;
	int retorno=-1;
	for(int i=0;i<len;i++){
		if(list[i].id==id){
			list[i].isEmpty=1;
		}

	}




	return retorno;

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
			 		 if(list[i].isEmpty==0){
			 			printOnePassenger(list[i]);

			 		 }

			 	 }

		}

		return retorno;
	return 0;
};

int sortPassengerByCode(Passenger* list, int len, int order){
	return 0;
};
