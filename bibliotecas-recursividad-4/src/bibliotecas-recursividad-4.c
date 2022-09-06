/*
 ============================================================================
 Name        : ejercicios(bibliotecas-recursividad)-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Make a program IN THE MAIN that allows calculating and displaying the factorial of a number. Use the RequestNumber function from Exercise 3-4.
 For example:
 5! = 5*4*3*2*1 = 120
 int numero;
 int i;
 long int factorial = 1;

 printf("ingrese numero: \n");
 scanf("%d", &numero);

 for (i = 1; i <= numero; i++) {

 factorial *= i;
 }
 printf("factorial es %ld \n", factorial);

 Create a program that allows the loading of temperatures in Celsius and Fahrenheit, validating that the temperatures entered are between the freezing and boiling point of water for each type of scale.
 Validations are done in a library.
 The transformation functions from fahrenheit to celsius and from celsius to fahrenheit are done in another library.

 ( °C * 1.8) + 32 =  °F
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	 int numero;
	 int i;
	 long int factorial = 1;

	 printf("ingrese numero: \n");
	 scanf("%d", &numero);

	 for (i = 1; i <= numero; i++) {

	 factorial *= i;
	 }
	 printf("factorial es %ld \n", factorial);


 return 0;
 }

