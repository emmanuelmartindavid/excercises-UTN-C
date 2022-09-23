/*
 ============================================================================
 Realizar un programa que permita el ingreso de 10 números enteros (positivos y negativos).
 Necesito generar un listado de los números positivos de manera creciente y negativos de manera decreciente.
 (Como máximo 5 estructuras repetitivas)
 Ejemplo:
 Listado 1 : 4, 5, 6, 10, 18, 29
 Listado 2 : -1,-5,-9,-12

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define LEN 10
int main(void) {

	int vec[LEN] = { 4, 5, 6, 10, 18, 29, -1, -5, -9, -12 };
	int i;
	int j;
	int aux = 0;

	/*if (vec != NULL && LEN > 0) {
	 for (i = 0; i < LEN; i++) {

	 printf("vec1: %d \n", vec[i]);

	 }
	 }*/

	/*
	 for (i = 0; i < LEN; i++) {
	 for (j = i + 1; j < LEN; j++) {

	 if (vec[i] > vec[j]) {
	 aux = vec[i];
	 vec[i] = vec[j];
	 vec[i ] = aux;
	 //ESTE TE ORDENA LOS NEGATIVOS DE FORMA CRECIENTE
	 }

	 }
	 }

	 for (i = 0; i < LEN; i++) {
	 printf("A vec i: %d \n", vec[i]);
	 }
	 */
	if (vec != NULL && LEN > 0) {
		for (i = 0; i < LEN; i++) {
			for (j = i + 1; j < LEN; j++) {

				if (vec[i] > vec[j]) {
					aux = vec[i];
					vec[i] = vec[j];
					vec[j] = aux;
					//ESTE TE ORDENA LOS NUMEROS DE FORMA DECRECIENTE
				}

			}
		}
	}

	if (vec != NULL && LEN > 0) {
		for (i = 0; i < LEN; i++) {
			printf("A vec i: %d \n", vec[i]);
		}
	}
	return EXIT_SUCCESS;
}
