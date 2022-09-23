/*
 ============================================================================
 Ejercicio 5-1:
 Pedir el ingreso de 5 números. Mostrarlos y calcular la sumatoria de los mismos.

 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);
	int vec[5];
	//int numbers[5];
	//int j=0;
	int acumulatorNumbers=0;
	int i = 0;

	for (i = 0; i < 5; i++) {
		printf("Enter 5 numbers please:");
		scanf("%d", &vec[i]);
	}
	for (i = 0; i < 5; i++) {
		acumulatorNumbers += vec[i];
		printf("Numbers entered: %d\n", vec[i]);
	}
	printf("Add of the numbers: %d \n", acumulatorNumbers);

	return EXIT_SUCCESS;
}

//[ 1  |   2   | 3  |  4  | 5]
//[ 0   | 1    | 2   | 3   |  4]
