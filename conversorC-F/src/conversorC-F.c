/*
 ============================================================================
 Name        : conversorC-F.c
 Author      : 
 Version     :
 ============================================================================
 */
#include "funciones-validaciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	setbuf(stdout, NULL);
	char option = '-';
	float degreeFarhenheit = 0;
	float degreeCelcius = 0;
	float fahrenheittoCelcius = 0;
	float celciustofahrenheit = 0;
	float validation = 0;
	menu(option, degreeFarhenheit, degreeCelcius, fahrenheittoCelcius,
			celciustofahrenheit, validation);
	return 0;
}

