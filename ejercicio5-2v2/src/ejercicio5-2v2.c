/*
 ============================================================================
 Ask for the input of 10 integers between -1000 and 1000. Determine:
 Number of positives and negatives.
 Sum of the pairs.
 The largest of the odd.
 List of entered numbers.
 List of even numbers.
 List of the numbers of the odd positions.

 repeating numbers
 Positives increasing and negatives decreasing

 Functions and vectors must be used.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define LEN 10
int main(void) {
	setbuf(stdout, NULL);
	int number[10];
	int i;

	printf("Enter 10 numbers between -1000 and 1000: \n");

	for (i = 0; i < LEN; i++) {
	        do {
	            printf("Ingrese un numero");
	            scanf("%d", &number[i]);
	        } while (!(number[i] < 1000 && number[i] >-1000));

	    }
	for (i = 0; i < 10; i++) {
		printf("List of entered numbers: %d \n", number[i]);
	}

	counterPositivesNegatives(number);
	acumulatoreven(number);
	calculatorLargestOdd(number);
	equalizerNumbers(number);
	orderOddNumber(number);
	orderPositivesNegatives(number);

	return EXIT_SUCCESS;
}

