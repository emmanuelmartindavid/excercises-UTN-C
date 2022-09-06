/*
 ============================================================================
 Name        : claseprogra.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int sumarDosEnteros(int primerNumero, int segundoNumero);
int dividirDosEnteros(int primerNumero, int segundoNumero, int *division, int *);

int main(void) {
	setbuf(stdout, NULL);
	char operador;
	int Uno;
	int Dos;
	int resultado;
	int resultadodivision;
	int multiplicacion;

	printf("Ingrese el numero: ");
	scanf("%d", &Uno);
	fflush(stdin);
	//fflush(stdin) SOLO WINDOWS
	printf("Ingrese el operador (+/-): ");
	scanf("%c", &operador);
	fflush(stdin);
	printf("\nIngrese el numero: ");
	scanf("%d", &Dos);
	fflush(stdin);

	switch (operador) {
	case '+':
		resultado = sumarDosEnteros(Uno, Dos);
		printf("El resultado es: %d", resultado);
		break;
	case '-':
		resultado = Uno - Dos;
		printf("El resultado es: %d", resultado);
		break;
	case '/':
		resultado = dividirDosEnteros(Uno, Dos, &resultadodivision, &multiplicacion);
		break;

	}
	if (resultado == -1) {
		printf("\nNo puede dividir por 0");
	}
	//if (resultado == -2) {
		//printf("\nNo puede ser mayor a 100 el primer numero");
	 else {
		printf("El resultado es: %d, %d", resultadodivision, multiplicacion);

	}

	return 0;
}

int sumarDosEnteros(int primerNumero, int segundoNumero) {
	int suma;

	suma = primerNumero + segundoNumero;

	return suma;
}

int dividirDosEnteros(int primerNumero, int segundoNumero, int *division, int *multiplicacion) //puntero *
{
	int retorno = 0;

	//int retorno = 0;
	//asegurarme con null que no guarde nada_______
	if (division != NULL) {
		//if (primerNumero > 100){
		//retorno = -2;
		if (segundoNumero != 0) {

			*(division) = primerNumero / segundoNumero;

		} else {

			retorno = -1;
		}

	}
	*(multiplicacion)=primerNumero*segundoNumero;

	return retorno;
}
