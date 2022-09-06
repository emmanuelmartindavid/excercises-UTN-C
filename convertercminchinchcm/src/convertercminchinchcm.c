/*
 ============================================================================
 Name        : convertercminchinchcm.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int menu(char option, float centimeter, float inch, float centimeterToInch,
		float inchToCentimeter);
float transformCentimeterToInches(float centimeter);
float transformInchesToCentimeters(float inch);

int main(void) {
	setbuf(stdout, NULL);
	char option = '-';
	float centimeter = 0;
	float inch = 0;
	float centimeterToInch = 0;
	float inchToCentimeter = 0;
	menu(option, centimeter, inch, centimeterToInch, inchToCentimeter);
	return 0;
}

int menu(char option, float centimeter, float inch, float centimeterToInch,
		float inchToCentimeter) {

	setbuf(stdout, NULL);

	char message = 's';
	do {
		printf(
				"Enter 'c' to transform CENTIMETER to INCHES, enter 'i' to transform INCHES to CENTIMETERS: \n");
		scanf("%c", &option);
		fflush(stdin);
		while (option != 'c' && option != 'i') {
			printf("Just 'c' o 'f': \n");
			scanf("%c", &option);
			fflush(stdin);
		}
		if (option == 'i') {
			printf("Enter INCHES: \n");
			scanf("%f", &inch);
			fflush(stdin);

			printf("%.2f INCHES are %.2f CENTIMETERS \n", inch,
					inchToCentimeter = transformInchesToCentimeters(inch));
		} else {
			printf("Enter CENTIMETERS: \n");
			scanf("%f", &centimeter);
			fflush(stdin);

			printf("%.2f CENTIMETERS are %.2f INCHES:\n", centimeter,
					centimeterToInch = transformCentimeterToInches(centimeter)

					);
		}
		printf("Press 's' to continue entering CENTIMETERS OR INCHES\n");
		scanf("%c", &message);
		fflush(stdin);

	} while (message == 's');
	return option;
}

float transformCentimeterToInches(float centimeter) {
	float inch;
	inch = (centimeter / 2.54);
	return inch;
}

float transformInchesToCentimeters(float inch) {
	float centimeter = -1;
	centimeter = (inch * 2.54);
	return centimeter;
}
