/*
 ============================================================================
 Name        : ejercicio3-5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumaNumero1(int primerNumero, int segundoNumero);
int sumaNumero2(void);
void sumaNumero3(int primerNumero, int segundoNumero);
void sumaNumero4(void);

int main(void) {

	int resultadoSuma1;
	int resultadoSuma2;
	int numero1 = 3;
	int numero2 = 4;

	resultadoSuma1 = sumaNumero1(numero1, numero2);
	printf("suma 1 funcion INT-INT: %d \n", resultadoSuma1);

	resultadoSuma2 = sumaNumero2();
	printf("suma 2 funcion INT-VOID: %d \n", resultadoSuma2);

	sumaNumero3(numero1, numero2);

	sumaNumero4();

	return EXIT_SUCCESS;
}

/*3-5. Realizar un programa en donde se puedan utilizar los prototipos de la función Sumar en sus 4 combinaciones.
 int Sumar1(int, int);
 int Sumar2(void);
 void Sumar3(int, int);
 void Sumar4(void);*/

//FUNCION RECIBE PARAMETRO Y RETORNA PARAMETRO - INT (INT)
int sumaNumero1(int primerNumero, int segundoNumero) {
	int suma;
	suma = primerNumero + segundoNumero;
	return suma;
}
//FUNCION NO RECIBE PARAMETRO Y RETORNA PARAMETRO - INT (VOID)

int sumaNumero2(void) {
	int primerNumero = 3;
	int segundoNumero = 4;
	int resultado;
	resultado = primerNumero + segundoNumero;

	return resultado;
}

//FUNCION RECIBE PARAMETRO Y  NO RETORNA PARAMETRO - VOID(INT)
void sumaNumero3(int primerNumero, int segundoNumero) {
	int resultado = 0;
	resultado = primerNumero + segundoNumero;
	printf("Suma 3 funcion VOID-INT: %d\n", resultado);
}

//FUNCION NO RECIBE PARAMETRO Y NO RETORNA PARAMETRO - VOID(VOID)
void sumaNumero4(void) {
	int primerNumero = 3;
	int segundoNumero = 4;
	int resultado = 0;
	resultado = primerNumero + segundoNumero;
	printf("Suma 3 funcion VOID-VOID: %d\n", resultado);
}

