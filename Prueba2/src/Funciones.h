/*
 * Funciones.h
 *
 *  Created on: 15 abr. 2022
 *      Author: lucas
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
 typedef struct
{
	int precio;
	int cantidad;
	char producto[20];
	int isEmpty;

}sProducto;
int inicializar(sProducto* List, int len );
void saludar();
int myGets(char* cadena ,int longitud);

#endif /* FUNCIONES_H_ */
