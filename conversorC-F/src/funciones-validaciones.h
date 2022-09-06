/*
 * funciones-validaciones.h
 *
 *  Created on: Sep 1, 2022
 *      Author: cuerpos
 */

#ifndef FUNCIONES_VALIDACIONES_H_
#define FUNCIONES_VALIDACIONES_H_

int menu(char option, float degreeFarhenheit, float degreeCelcius,
		float fahrenheittoCelcius, float celciustofahrenheit, float validation);

float transformFahrenheitCelcius(float fahrenheit);

float transformCelciusFahrenheit(float celcius);

float validateTemperatureFarhenheit(float degreeFarhenheit);

float validateTemperauteCelcius(float degreeCelcius);

#endif /* FUNCIONES_VALIDACIONES_H_ */
