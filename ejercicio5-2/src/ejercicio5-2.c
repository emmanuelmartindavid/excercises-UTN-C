/*
 ============================================================================
 Name        : ejercicio5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
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

int main(void) {

	setbuf(stdout, NULL);
	int number[10];
	int oddNumber[10] = { -2, -2, -2, -2, -2, -2, -2, -2, -2, -2 };
	int i;
	int c;
	//int j;
	//int aux;
	//int flagNoEstaOrdenado = 1;
	//int len;
	//int r=1;
	//int temp;
	int acumulatorPairs = 0;
	int largestOdd = 0;
	int counterPositives = 0;
	int counterNegatives = 0;
	int flag = 0;
	//int temp;
	int aux;
	int j;
	//int repeatingNumber[10];
	//int same[10];
	//int sameNumbers[10];
	//int temp;
	//int r=0;
	printf("Enter 10 numbers between -1000 and 1000: \n");

	for (i = 0; i < 10; i++) {

		scanf("%d", &number[i]);

	}

	for (i = 0; i < 10; i++) {

		if (number[i] > 0) {
			counterPositives++;
		} else {
			counterNegatives++;
		}

		if (number[i] % 2 == 0) {
			printf("List of even numbers %d: \n", number[i]);
			acumulatorPairs += number[i];
		} else {
			oddNumber[i] = i;
			if (flag == 0 || largestOdd < number[i]) {
				largestOdd = number[i];
				flag = 1;

			}
		}

	}

	for (i = 0; i < 10; i++) {
		for (j = i + 1; j < 10; j++) {

			if (number[j] == number[i]) {

				printf("position[%d] = number %d = position[%d] = number %d\n",
						i, number[i], j, number[j]);
			}
		}
	}

	for (i = 0; i < 10; i++) {
		printf("List of entered numbers %d: \n", number[i]);
	}

	for (c = 0; c < 10; c++) {
		if (oddNumber[c] != -2) {
			printf("Position odd numbers: %d \n", oddNumber[c]);
		}
	}

	for (i = 0; i < 10 - 1; i++) {
		for (j = i + 1; j < 10; j++) {
			if (number[i] > number[j]) {
				aux = number[i];
				number[i] = number[j];
				number[j] = aux;

			}
		}
	}
	for (j = 0; j < 10; j++) {
		if (number[j] > 0) {
			printf("positives increacing: %d \n", number[j]);
		} else {
			printf("negatives : %d \n", number[j]);
		}
	}

	printf("The number of positives: %d , number of negatives %d: \n",
			counterPositives, counterNegatives);
	printf("The add of pair numbers %d \n", acumulatorPairs);
	printf("Largest of the odds %d \n", largestOdd);

	return EXIT_SUCCESS;
}

/*//ORDENAMIENTO POR INSERCION
 for (i = 1; i < 10; i++) {
 temp = number[i];
 j = i - 1;
 while (j >= 0 && temp < number[j]) // temp<data[j] o temp>data[j]
 {
 number[j + 1] = number[j];
 j--;
 }
 number[j + 1] = temp;  //inserción

 }*/
