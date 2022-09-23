/*
 ============================================================================
 Name        : ejercicio3-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int determinarPar(int numero) ;

int main(void) {
	int numero=0;

	numero = determinarPar(numero);

	printf("si numero es par imprime 1, si es impar 0: %d", numero);

	return EXIT_SUCCESS;
}
// 3=-2/ Crear una función que permita determinar si un número es par o no. La función retorna 1 en caso afirmativo y 0 en caso contrario.
int determinarPar(int numero) {

	int numeros;

	if (numero % 2 == 0) {
		numeros = 1;
	} else {
		numeros = 0;
	}

	return numeros;
}
