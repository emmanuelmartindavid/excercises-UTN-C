/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 5-2:
Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
Cantidad de positivos y negativos.
Sumatoria de los pares.
El mayor de los impares.
Listado de los números ingresados.
Listado de los números pares.
Listado de los números de las posiciones impares.
 */

#include <stdio.h>
#include <stdlib.h>


void showLoadNumbers(int array[]);
#define LEN 10


int main(void) {
	setbuf(stdout , NULL);

	int i;
	int numeros[LEN];

	for(i=0; i < LEN; i++){
		printf("Ingrese un numero: ");
		scanf("%d", &numeros[i]);
		fflush(stdin);
		}

		showLoadNumbers(numeros);

	return EXIT_SUCCESS;
}


void showLoadNumbers(int array[]){

	for(int i = 0; i < 10; i++) {
		printf("listed numbers: %d \n", array[i]);
	}
}



