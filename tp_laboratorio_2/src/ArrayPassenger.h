

#ifndef ARRAYPASSENGER_H_
#define ARRAYPASSENGER_H_

typedef struct{

	int id;
	char name[51];
	char lastName[51];
	float price;
	char flycode[10];
	int typePassenger;
	int isEmpty;

}Passenger;

#endif
/** \brief	To indicate that all position in the array are empty, 
*			this funciont put the flag (isEmpty) in TRUE in all
*			position of the array.
*
*	\param  list Passenger* Pointer to array of passenger. 
*   \param 	len int Array lenght.
*
*\return int Return (-1) if Error [Invalide lenght or NULL pointer ]. 
*
*/
int initPassengers(Passenger* list, int len);


/** \brief 	add in a existing list of passengers the values received as parameters
* 			in the first empty position.
*
*	\param list passenger* 
*	\param len int
* 	\param id int
* 	\param name[] char
*	\param lastName[] char
* 	\param price float
* 	\param typePassenger int
* 	\param flycode[] char
*
* \return int Return (-1) if Error [Invalid length or NULL pointer or without free space] - (0) if Ok.
*		
*/
int addPassenger(Passenger* list, int len, int id, char name[], char lastName[], float price, int typePassenger, char flycode[] );


/** \brief 	find a Passenger by Id en returns the index position in array.
*
* 	\param list Passenger*
* 	\param len int
* 	\param id int
* 	\return Return passenger index position or (-1) if [Invalid length or
*			NULL pointer received or passenger not found].
*
*/
int findPassengerByid(Passenger* list, int len, int id);


/** \brief 	Remove a Passenger by Id (put isEmpty Flag in 1)
*
* 	\param list Passenger*
* 	\param len int
* 	\param id int
* 	\return int Return (-1) if Error [Invalid length or NULL pointer or if can't
*			find a passenger] - (0) if Ok
*
*/
int removePassenger(Passenger* list, int len, int id);


/** \brief 	Sort the elements in the array of passengers, the argument order
			indicate UP or DOWN order
*
* 	\param list Passenger*
* 	\param len int
* 	\param order int [1] indicate UP - [0] indicate DOWN
* 	\return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
*
*/
int sortPassenger(Passenger* list, int len, int order);


/** \brief 	print the content of passengers array
*
* \param list Passenger*
* \param length int
* \return int
*
*/
int printPassenger(Passenger* list, int lenght);


/**	\brief 	Sort the elements in the array of passengers, the argument order
*			indicate UP or DOWN order
*
* \param list Passenger*
* \param len int
* \param order int [1] indicate UP - [0] indicate DOWN
*
*/
int sortPassengerByCode(Passenger* list, int len, int order);
void printOnePassenger(Passenger list);
int forcedData(Passenger* List,int len);
int pedirDatos(Passenger* list);
