/*
 ============================================================================
 ANEXO 5-1:
 Armar un Menú de Opciones con las siguientes opciones
 1-Inicializar
 2-Cargar
 3-Mostrar
 4-Calcular Promedio
 5-Ordenar
 Al ingresar a cada opción del menú deberá imprimir en pantalla el nombre del mismo.
 Ej: Si se presiona la opción 1 mostrar por pantalla “Ud. ha seleccionado lo opción 1-Inicializar”
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 5
int main(void) {
	setbuf(stdout, NULL);
	int array[TAM];
	int options;
	int result;
	float average;

	do {
		options=showMenu();
		switch (options) {
		case 1:
			printf("You have selected the option. 1-Initialize \n");
			initializeArray(array, TAM);
			system("cls");
			break;
		case 2:
			printf("You have selected the option. 2-Load \n");
			Sequentialload(array, TAM);
			system("cls");
			//AleatoryLoad(age);
			break;
		case 3:
			printf("You have selected the option. 3-Show \n");
			showLoadNumbers(array, TAM);
			system("cls");
			break;
		case 4:
			printf("You have selected the option. 4-Calculate Average \n");
			result = averageNumbers(array, &average, TAM);
			printf("Average %.2f \n", average);
			if (result == 1) {
				printf("something went wrong \n");
			}else{
				printf("average done \n");
			}
			//printf("Average inside case 4  is: %.2f \n", average);
			break;
		case 5:
			//printf("Average %.2f \n", average);
			break;
		}
	} while(options != 6);

	return EXIT_SUCCESS;
}
