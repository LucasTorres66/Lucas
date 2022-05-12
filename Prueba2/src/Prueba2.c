/*
 ============================================================================
 Name        : Prueba2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"


int main(void) {
/*
	saludar();
	sProducto List[3];
	inicializar(List,3);
	for(int i=0;i<3;i++){
		printf("price : %d  \n" ,List[i].precio);
		printf("EEstado : %d \n", List[i].isEmpty);
	}
*/
	//setbuf(stdout,NULL);
	char pArray[5];
	if(myGets(pArray,sizeof(pArray))==0){
		printf("%s",pArray);
	}else{
		 printf("Max");
	}


;	return EXIT_SUCCESS;

}
