/*
 * funcionesTPPrueba.h
 *
 *  Created on: 10 sep. 2022
 *      Author: cuerpos
 */

#ifndef FUNCIONESTPPRUEBA_H_
#define FUNCIONESTPPRUEBA_H_

int getInt(int *pResult);
int myGets(char *string, int len);
int isNumeric(char *string);
int utn_getNumber(int *pResult, char *message, char *ErrorMessage, int minimus,
		int maximus, int retry);
int getFloat(float *pResult);
int isNumericFloat(char *string);
int myGetsFloat(char *string, int len);
int utn_getNumberFloat(float *pResult, char *message, char *ErrorMessage, float minimus,
		float maximus, int retry);


#endif /* FUNCIONESTPPRUEBA_H_ */
