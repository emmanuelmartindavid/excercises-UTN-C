/*
 * funciones.c
 *
 *  Created on: Sep 1, 2022
 *      Author: cuerpos
 */
#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int calculadora(int suma, int resta, int multiplicar, float dividir,
		int primerNumero, int segundoNumero, int temp, int factorial,
		int status, char operacion, char mensaje) {
	setbuf(stdout, NULL);

	do {
		printf("ingrese numero 1: \n");
		status = scanf("%d", &primerNumero);
		fflush(stdin);
		while (status != 1) {
			while ((temp = getchar()) != EOF && temp != '\n');
			printf("ingrese solo numeros \n");
			status = scanf("%d", &primerNumero);
			fflush(stdin);
		}
		do {
			printf(
					"ingrese la operacion a realizar: '+', '-','*','/', 'factorial' \n");
			scanf("%c", &operacion);
			fflush(stdin);

		} while (operacion != '+' && operacion != '-' && operacion != '*'
				&& operacion != '/' && operacion != 'f');
		printf("ingrese numero 2: \n");
		scanf("%d", &segundoNumero);
		fflush(stdin);
		while (status != 1) {
			while ((temp = getchar()) != EOF && temp != '\n')
				;
			printf("ingrese solo numeros \n");
			status = scanf("%d", &segundoNumero);
			fflush(stdin);
		}
		if (operacion == '+') {
			printf("la suma es %d: \n",
					suma = sumaNumero(primerNumero, segundoNumero));
		} else if (operacion == '-') {
			printf("la resta es %d: \n",
					resta = restaNumero(primerNumero, segundoNumero));
		} else if (operacion == '*') {
			printf("la multiplicacion es %d: \n", multiplicar =
					multiplicacionNumero(primerNumero, segundoNumero));
		} else if (operacion == '/') {
			if (segundoNumero == 0) {
				printf("no se puede dividir por 0");
			} else {
				printf("la division es %.2f: \n",
						dividir = divisionNumero(primerNumero, segundoNumero));
			}
		}
		if (operacion == 'f') {
			if (primerNumero < 0 || segundoNumero < 0) {

				printf("no puede realizar factorial menor a 1");
			} else {
				printf("factorial Primer numero %d: \n", factorial =
						factorialNumeros(primerNumero));
				printf("factorial segundo numero %d: \n", factorial =
						factorialNumeros(segundoNumero));
			}
		}
		printf("oprima 's' para continuar, 'e' para salir. \n");
		scanf("%c", &mensaje);
		fflush(stdin);

	} while (mensaje == 's');

	return operacion;
}

int sumaNumero(int primerNumero, int segundoNumero) {
	int suma;
	suma = primerNumero + segundoNumero;
	return suma;
}

int restaNumero(int primerNumero, int segundoNumero) {
	int resta;
	resta = primerNumero - segundoNumero;
	return resta;
}

int multiplicacionNumero(int primerNumero, int segundoNumero) {
	int multiplicar;
	multiplicar = primerNumero * segundoNumero;
	return multiplicar;
}

float divisionNumero(int primerNumero, int segundoNumero) {
	float dividir;
	dividir = (float) primerNumero / segundoNumero;
	return dividir;
}

long int factorialNumeros(int primerNumero) {
	int factorial = 1;
	int i;

	for (i = 1; i <= primerNumero; i++) {

		factorial = factorial * i;
	}
	return factorial;
}

/*switch (operacion) {
 case '+':
 suma = sumaNumero(primerNumero, segundoNumero);
 break;
 case '-':
 resta = restaNumero(primerNumero, segundoNumero);
 break;
 case '*':
 multiplicar = multiplicacionNumero(primerNumero, segundoNumero);
 break;
 case '/':
 dividir = divisionNumero(primerNumero, segundoNumero);
 break;
 case 'f':
 if (primerNumero < 0 || segundoNumero < 0) {

 printf("no puede realizar factorial menor a 1");
 } else {
 factorial = factorialNumeros(primerNumero);
 factorial = factorialNumeros(segundoNumero);
 }

 break;
 }*/

/*
 int menu(int primerNumero, int segundoNumero, char mensaje, char operacion) {
 setbuf(stdout, NULL);
 // int primerNumero = 0;
 // int segundoNumero = 0;
 //int resultadoSuma = 0;
 //int resultadoResta = 0;
 // int resultadoMultiplicar = 1;
 // float resultadoDividir = 1;
 //char mensaje = 's';

 do {
 printf("ingrese numero 1: \n");
 scanf("%d", &primerNumero);
 fflush(stdin);

 printf("ingrese la operacion a realizar: '+', '-','*','/' \n");
 scanf("%c", &operacion);
 fflush(stdin);

 printf("ingrese numero 2: \n");
 scanf("%d", &segundoNumero);
 fflush(stdin);

 printf("oprima 'y' para resolver la operacion \n");
 scanf("%c", &mensaje);
 fflush(stdin);

 } while (mensaje == 's');

 return mensaje;
 }

 int operacion(int primerNumero, int segundoNumero, int suma, int resta,
 int multiplicar, float dividir, , char operacion) {
 switch (operacion) {
 case '+':
 suma = sumaNumero(primerNumero, segundoNumero);
 break;
 case '-':
 resta = restaNumero(primerNumero, segundoNumero);
 break;
 case '*':
 multiplicar = multiplicacionNumero(primerNumero, segundoNumero);
 break;
 case '/':
 dividir = divisionNumero(primerNumero, segundoNumero);
 break;
 }
 return operacion;
 }




 float divisionNumero(int numero1, int numero2)
 {
 int dividir;
 int retorno=0;

 if(numero2!=0){
 dividir= (float) numero1/numero2;
 }else{
 retorno=-1;
 }

 return dividir;
 }*/

