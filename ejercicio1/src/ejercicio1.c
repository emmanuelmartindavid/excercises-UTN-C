/*
 ============================================================================
 Name        : ejercicio1.c

Exercise 1-1: Enter two integers, add them and display the result.
Example:
If we enter 3 and 2, the program will show: "The sum between 3 and 2 results in 5"
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);
	int numeroUno;
	int numeroDos;
	int suma;

	printf("Ingrese número uno: ");
	scanf("%d", &numeroUno);
	printf("Ingrese número dos: ");
	scanf("%d", &numeroDos);

	suma=numeroUno+numeroDos;

	printf("La suma es: %d", suma);
	return 0;
}

