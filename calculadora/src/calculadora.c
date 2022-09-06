/*
 ============================================================================
 Name        : calculadora.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funciones.h"

int main(void) {
	setbuf(stdout, NULL);
	int primerNumero = 0;
	int segundoNumero = 0;
	int resultadoSuma = 0;
	int resultadoResta = 0;
	int resultadoMultiplicar = 1;
	float resultadoDividir = 1;
	char operacion;
	char mensaje = 's';
	int menu;
	int status;
	int temp;
	int factorial;

	menu = calculadora(resultadoSuma, resultadoResta, resultadoMultiplicar,
			resultadoDividir, primerNumero, segundoNumero, temp, factorial, status,
			operacion, mensaje);

	return (0);
}
