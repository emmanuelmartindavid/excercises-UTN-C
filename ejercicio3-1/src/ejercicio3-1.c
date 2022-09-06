/*
 ============================================================================
 Name        : ejercicio3-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void pedirNumero(float numero);

int main(void) {

	int numero;
	printf("ingrese numero");
	scanf("%d", &numero);

	pedirNumero(numero);

	return EXIT_SUCCESS;
}

//3-1 Crear una función que muestre por pantalla el número flotante  que recibe como parámetro.

void pedirNumero(float numero) {

	printf("el numero ingresado es: \n", numero);
}
