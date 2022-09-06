/*
 ============================================================================
Ejercicio 4-1:
Realizar un programa EN EL MAIN que permita calcular y mostrar el factorial de un número. Utilizar la función PedirNumero de la ejercitación 3-4.
Por ejemplo:
5! = 5*4*3*2*1 = 120
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int factorial = 1;
	int primerNumero=5;
	int i;

		for (i = 1; i <= primerNumero; i++) {

			factorial = factorial * i;
		}

		printf("factorial es: %d", factorial);

	return EXIT_SUCCESS;
}
