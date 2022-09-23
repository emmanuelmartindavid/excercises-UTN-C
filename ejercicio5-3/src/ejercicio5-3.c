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

void averagePositives(int number[]);
void addPredecessorsMinimumNegative(int number[]);

int main(void) {
	setbuf(stdout, NULL);
	int number[10];
	int i = 0;

	for (i = 0; i < 10; i++) {
		do {
			printf("ingrese numero entero: %d \n", i);
			scanf("%d", &number[i]);
		} while (number[i] == 0);
	}
	averagePositives(number);
	addPredecessorsMinimumNegative(number);
	return EXIT_SUCCESS;

}
void averagePositives(int number[]) {

	int acumulatorPositives = 0;
	int counterPositives = 0;
	float average = 0;

	for (int i = 0; i < 10; i++) {
		if (number[i] > 0) {
			acumulatorPositives += number[i];
			counterPositives++;
			average = (float) acumulatorPositives / counterPositives;
		}
	}
	printf("The average of positives numbers is: %.2f \n", average);
}

void addPredecessorsMinimumNegative(int number[]) {

	int flag = 0;
	int lessNegative = 0;
	int i = 0;
	int acumulatorLessNegative = 0;

	for (i = 0; i < 10; i++) {
		if (number[i] < 0) {
			if (flag == 0 || lessNegative > number[i]) {
				lessNegative = number[i];
				flag = 1;
			}
		}
	}
//	printf("%d \n", lessNegative);
	for (i = lessNegative; lessNegative < 0; lessNegative++) {
		acumulatorLessNegative += lessNegative + 1;
	}
	printf("the add of the predecessors negatives: %d \n", acumulatorLessNegative);
}



