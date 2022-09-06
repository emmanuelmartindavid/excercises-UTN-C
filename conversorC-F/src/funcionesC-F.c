/*
 * funcionesC-F.c
 *
 *  Created on: Sep 1, 2022
 *      Author: cuerpos
 */
#include "funciones-validaciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

float transformFahrenheitCelcius(float fahrenheit) {
	int celcius;
	celcius = (fahrenheit - 32) * 5 / 9;
	return celcius;
}

float transformCelciusFahrenheit(float celcius) {
	float fahrenheit;
	fahrenheit = (celcius * 9 / 5) + 32;
	return fahrenheit;
}

float validateTemperatureFarhenheit(float degreeFarhenheit) {

	do {
		fflush(stdin);
		printf("Enter temperature in DEGREES FAHRENHEIT: \n");
		scanf("%f", &degreeFarhenheit);

	} while (degreeFarhenheit < 32 || degreeFarhenheit > 212);

	return degreeFarhenheit;
}

float validateTemperauteCelcius(float degreeCelcius) {
	do {
		fflush(stdin);
		printf("Enter temperature in DEGREES CELCIUS: \n");
		scanf("%f", &degreeCelcius);
	} while (degreeCelcius < 0 || degreeCelcius > 100);

	return degreeCelcius;
}
