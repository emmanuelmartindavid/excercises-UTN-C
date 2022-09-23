/*
 * funciones.h
 *
 *  Created on: 8 sep. 2022
 *      Author: cuerpos
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

//int getIntNumber(int *pResultado);
int isNumeric(char *string);
int getInt(int *pResult);
int myGets(char *string, int len);
int utn_getNumber(int *pResult, char *message, char *ErrorMessage, int minimus,
		int maximus, int retry);


#endif /* FUNCIONES_H_ */
