#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include "funciones.h"

void menu(char option, float degreeFarhenheit, float degreeCelcius,
		float fahrenheittoCelcius, float celciustofahrenheit, float validation) {

	setbuf(stdout, NULL);

	char message = 's';
	do {

		do {
			printf(
					"Enter 'f' to transform FAHRENHEIT to CELCIUS, enter 'c' to transform CELCIUS to FAHRENHEIT: \n");
			fflush(stdin);
			scanf("%c", &option);

		} while (option != 'c' && option != 'f');

		if (option == 'f') {
			validation = validateTemperatureFarhenheit(degreeFarhenheit);
			printf("%.2f FAHRENHEIT are %.2f CELCIUS \n", validation,
					fahrenheittoCelcius = transformFahrenheitCelcius(
							validation));
		} else {
			validation = validateTemperauteCelcius(degreeCelcius);
			printf("%.2f CELCIUS are %.2f FAHRENHEIT \n", validation,
					celciustofahrenheit = transformCelciusFahrenheit(
							validation));
		}

		fflush(stdin);
		printf("Press 's' to continue entering temperatures\n");
		scanf("%c", &message);

	} while (message == 's');
}

