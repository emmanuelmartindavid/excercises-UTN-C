/*
 ============================================================================
 Name        : ejercicio3-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int perdirNumero(int numero);

int main(void) {

	int numero;

	numero = perdirNumero(numero);

	printf("numero ingresado es: %d", numero);

	return EXIT_SUCCESS;
}

//3-3/ Crear una función que pida el ingreso de un entero y lo retorne.
int perdirNumero(int numero) {

	printf("ingrese un numero entero: \n");
	fflush(stdin);
	scanf("%d", &numero);

	int pedirnumero = numero;
	return pedirnumero;
}
