/*
 ============================================================================
 Name        : mainconversorC-f.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	setbuf(stdout, NULL);
	char trans='-';
	int temperaturaFar=0;
	int temperaturaCelcius=0;
	int farCels=0;
	int celsFar=0;
	menu(trans, temperaturaFar, temperaturaCelcius, farCels, celsFar);
	return 0;
}



/*
 * 	int temperaturaCelcius;
	int temperaturaFar;
	int transC;
	int transF;
	char trans;
	char mensaje = 's';

	do {
		printf(
				"ingrese f para transformar a FAHRENHEIT, ingrese c para transformar a CELCIUS: \n");
		scanf("%c", &trans);
		fflush(stdin);
		while (trans != 'c' && trans != 'f') {
			printf("solo  c o f: \n");
			scanf("%c", &trans);
			fflush(stdin);
		}

		if (trans == 'f') {
			printf("ingrese temperatura: \n");
			scanf("%d", &temperaturaFar);
			fflush(stdin);
			while (temperaturaFar < 32 || temperaturaFar > 212) {
				printf("solo entre 32 y 212: \n");
				scanf("%d", &temperaturaFar);
				fflush(stdin);
			}
			transF = (temperaturaFar - 32) * 0.56;
			printf("%d FAHRENHEIT SON %d CELCIUS \n", temperaturaFar, transF);
		} else {
			printf("ingrese temperatura: \n");
			scanf("%d", &temperaturaCelcius);
			fflush(stdin);
			while (temperaturaCelcius < 0 || temperaturaCelcius > 100) {
				printf("solo entre 0 y 100: \n");

				scanf("%d", &temperaturaCelcius);
				fflush(stdin);
			}

			transC = (temperaturaCelcius * 1.8) + 32;
			printf("%d CELCIUS SON %d FAHRENHEIT:\n", temperaturaCelcius,
					transC);
		}

		printf("oprima 's' para seeguir ingresando temperaturas \n");
		scanf("%c", &mensaje);
		fflush(stdin);

	} while (mensaje == 's');
 */
