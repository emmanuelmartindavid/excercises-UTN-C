/*
 ============================================================================
 Realizar un programa que permita el ingreso de 10 números enteros distintos de cero.
 La carga deberá ser aleatoria (todos los elementos se inicializan en cero por default).
 Determinar el promedio de los positivos, y del menor de los negativos la suma de los antecesores
 (Según la recta numérica de los reales, hasta llegar a cero).
 Utilizar funciones y vectores.
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int number;


	do {
		printf("Enter 10 numbers: \n");

			for(int i;i<10;i++){
			scanf("%d", &number);
			}
	} while (number == 0);

	return EXIT_SUCCESS;

}
