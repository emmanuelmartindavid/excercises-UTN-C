/*
 * validacionesC-F.c
 *
 *  Created on: 1 sep. 2022
 *      Author: cuerpos
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int menu(char trans, int temperaturaFar, int temperaturaCelcius, int farCels, int celsFar){

setbuf(stdout, NULL);

	char mensaje = 's';
	do {
		printf(
				"ingrese f para transformar a CELCIUS, ingrese c para transformar a FAHRENHEIT: \n");
		scanf("%c", &trans);
		fflush(stdin);
		while (trans != 'c' && trans != 'f') {
			printf("solo  c o f: \n");
			scanf("%c", &trans);
			fflush(stdin);
		}
		if (trans == 'f') {
			printf("ingrese temperatura en GRADOS FAHRENHEIT: \n");
			scanf("%d", &temperaturaFar);
			fflush(stdin);
			while (temperaturaFar < 32 || temperaturaFar > 212) {
				printf("solo entre 32 y 212: \n");
				scanf("%d", &temperaturaFar);
				fflush(stdin);
			}

			printf("%d FAHRENHEIT SON %d CELCIUS \n", temperaturaFar, farCels=transFC(temperaturaFar));
		} else {
			printf("ingrese temperatura EN GRADOS CELCIUS: \n");
			scanf("%d", &temperaturaCelcius);
			fflush(stdin);
			while (temperaturaCelcius < 0 || temperaturaCelcius > 100) {
				printf("solo entre 0 y 100: \n");

				scanf("%d", &temperaturaCelcius);
				fflush(stdin);
			}
			printf("%d CELCIUS SON %d FAHRENHEIT:\n", temperaturaCelcius, celsFar=transCF(temperaturaCelcius));
		}
		printf("oprima 's' para seeguir ingresando temperaturas \n");
		scanf("%c", &mensaje);
		fflush(stdin);

	} while (mensaje == 's');
return trans;
}


