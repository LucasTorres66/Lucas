/*
 * UTN.C
 *
 *  Created on: 4 may. 2022
 *      Author: lucas
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int myGets(char* cadena ,int longitud,char* mensaje[]){
	int retorno=1;
	char bufferString[4096];
	printf("%s",mensaje);
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


