#include <stdio.h>
#include <stdlib.h>
#define LEN 10

void counterPositivesNegatives(int number[]) {

	int counterPositives = 0;
	int counterNegatives = 0;

	for (int i = 0; i < LEN; i++) {

		if (number[i] > 0) {
			counterPositives++;
		} else {
			counterNegatives++;
		}

	}

	if (counterPositives > 0) {
		printf("Listed POSITIVES: %d \n", counterPositives);
	}
	if (counterNegatives > 0) {
		printf("Listed NEGATIVES: %d \n", counterNegatives);

	}
}

void acumulatoreven(int number[]) {

	int i;
	int acumulatorPairs;
	for (i = 0; i < LEN; i++) {
		if (number[i] % 2 == 0) {
			printf("List of even numbers %d: \n", number[i]);
			acumulatorPairs += number[i];
		}

	}
	printf("The add of pair numbers %d \n", acumulatorPairs);
}

void calculatorLargestOdd(int number[]) {

	int largestOdd;
	int flag = 0;
	int i;

	for (i = 0; i < LEN; i++) {
		if (number[i] % 2 != 0) {
			//
			if (flag == 0 || largestOdd < number[i]) {
				largestOdd = number[i];
				flag = 1;
			}
		}
	}
	printf("Largest of the odds %d \n", largestOdd);
}

void equalizerNumbers(int number[]) {

	for (int i = 0; i < LEN; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (number[j] == number[i]) {

				printf("position[%d] = number %d = position[%d] = number %d\n",
						i, number[i], j, number[j]);
			}
		}
	}

}

void orderOddNumber(int number[]) {

	for (int i = 0; i < LEN; i++) {
		if (number[i] % 2 != 0) {
			printf("Position odd numbers: %d \n", i);
		}
	}
}

void orderPositivesNegatives(int number[]) {

	int aux;

	for (int i = 0; i < LEN - 1; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (number[i] > number[j]) {
				aux = number[i];
				number[i] = number[j];
				number[j] = aux;

			}
		}
	}
	for (int j = 0; j < LEN; j++) {
		if (number[j] > 0) {
			printf("positives increasing: %d \n", number[j]);
		} else {
			printf("negatives decreasing: %d \n", number[j]);
		}
	}
}

