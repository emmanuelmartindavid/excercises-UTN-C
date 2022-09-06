#include <stdio.h>
#include <stdlib.h>

void counterPositivesNegatives(int number[]) {

	int counterPositives = 0;
	int counterNegatives = 0;

	for (int i = 0; i < 10; i++) {

		if (number[i] > 0) {
			counterPositives++;
		} else {
			counterNegatives++;
		}

		printf("positives:  %d , negatives %d: \n",
				counterPositives, counterNegatives);
	}
}

void acumulatoreven(int number[]) {

	int i;
	int acumulatorPairs;
	for (i = 0; i < 10; i++) {
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

	for (i = 0; i < 10; i++){
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

	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (number[j] == number[i]) {

				printf("position[%d] = number %d = position[%d] = number %d\n",
						i, number[i], j, number[j]);
			}
		}
	}

}

void orderOddNumber(int number[]) {

	int oddNumber[10] = { -2, -2, -2, -2, -2, -2, -2, -2, -2, -2 };
	int c;
	for (c = 0; c < 10; c++) {
		if (oddNumber[c] != -2) {
			printf("Position odd numbers: %d \n", oddNumber[c]);
		}
	}
}

void orderPositivesNegatives(int number[]) {

	int aux;

	for (int i = 0; i < 10 - 1; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (number[i] > number[j]) {
				aux = number[i];
				number[i] = number[j];
				number[j] = aux;

			}
		}
	}
	for (int j = 0; j < 10; j++) {
		if (number[j] > 0) {
			printf("positives increasing: %d \n", number[j]);
		} else {
			printf("negatives decreasing: %d \n", number[j]);
		}
	}
}

