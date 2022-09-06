/*
 ============================================================================
 Name        : ejercicio3-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int perdirNumeroRango(int numero);

int main(void) {
	int numero;

	numero = perdirNumero(numero);

	printf("numero ingresado es: %d", numero);

	return EXIT_SUCCESS;
}

//3-4Especializar la función anterior para que permita validar el entero ingresado en un rango determinado.
int perdirNumeroRango(int numero) {
	printf("ingrese un numero entero: \n");
	fflush(stdin);
	scanf("%d", &numero);
	while (numero < 0 || numero > 10) {
		printf("solo numeros del 1 al 10 \n");
		scanf("%d", &numero);
	}
	int pedirnumero = numero;
	return pedirnumero;
}
