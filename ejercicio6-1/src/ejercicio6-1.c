/*
 ============================================================================
 Disponemos de dos variables numéricas (a y b).
 Realizar un algoritmo que permita el intercambio de valores de dichas variables.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define LEN 2
int main(void) {

	int vec1[LEN] = { 4, 8 };
	int a = 4;
	int b = 8;
	int i;
	int j;

	printf("A: %d \n", a);
	printf("B: %d \n", b);

	/*if (vec1 != NULL && LEN > 0) {
		for (i = 0; i < LEN; i++) {

			printf("vec1: %d \n", vec1[i]);

		}
	}*/

	for (i = 0; i < LEN; i++) {
		for (j = 1; j < LEN; j++) {

			a = vec1[i];
			b = vec1[j-1];

		}

	}
	printf("A: %d \n", a);
	printf("B: %d \n", b);

	return EXIT_SUCCESS;
}

/*if(vec1[i]>vec1[j]){

 a=vec1[i];
 b=vec1[j];
 printf("A vec i: %d \n", a);
 printf("B vec j: %d \n", b);

 }*/
