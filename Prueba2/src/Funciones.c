/*
 * Funciones.c
 *
 *  Created on: 15 abr. 2022
 *      Author: lucas
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"
void saludar(){
	printf("ONIII CHANNN");

}
int inicializar(sProducto* List, int len ){
	int i;
	for(i=0;i<len;i++){
		List[i].isEmpty = 1;
		List[i].precio = 25;
	}

	return 0;
}
int myGets(char* cadena ,int longitud){
	int retorno=1;
	char bufferString[4096];

	if(cadena != NULL && longitud > 0 ){
		fflush(stdin);
		if(fgets(bufferString,sizeof(bufferString),stdin) != NULL )//TOMA LOS CARACTERES DADOS X EL BUFFER, EN CASO DE ERROR  RETORNA  NULL
		{
			if(bufferString [strnlen( bufferString, sizeof (bufferString) ) -1 ] =='\n')//SI EL ARRAY EN LA ULTIMA-1 TIENE  \N
			{
				bufferString[strnlen( bufferString , sizeof(bufferString) ) -1 ] ='\0';// LO REMPLAZO X  \0
			}
			if(strnlen(bufferString,sizeof(bufferString))<=longitud)
			{
				strncpy(cadena,bufferString,longitud);
				retorno=0;
			}
		}
	}
	return retorno;


}
