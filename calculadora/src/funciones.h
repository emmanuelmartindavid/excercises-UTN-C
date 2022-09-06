/*
 * funciones.h
 *
 *  Created on: Sep 1, 2022
 *      Author: cuerpos
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/** \brief
 *
 * \param
 * \param
 * \ruturn
 *
 */
int calculadora(int suma, int resta, int multiplicar, float dividir,
		int primerNumero, int segundoNumero, int temp, int factorial, int status,
		char operacion, char mensaje);


int sumaNumero(int primerNumero, int segundoNumero);

int restaNumero(int primerNumero, int segundoNumero);

int multiplicacionNumero(int primerNumero, int segundoNumero);

float divisionNumero(int primerNumero, int segundoNumero);

long int factorialNumeros(int primerNumero);

long int factorialNumeros(int segundoNumero);

//int menu(int primerNumero, int segundoNumero, char mensaje, char operacion)

//int operacion(int primerNumero, int segundoNumero, int suma, int resta, int multiplicar, float dividir, , char operacion);

//int calculadora(int suma, int resta, int multiplicar, int dividir, int numero1, int numero2, char operacion);


#endif /* FUNCIONES_H_ */
