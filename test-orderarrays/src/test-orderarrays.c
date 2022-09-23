/*
 ============================================================================
 Name        : test-orderarrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 20
void orderPositivesNegatives(int number[]);

int main(void) {
	setbuf(stdout, NULL);
	int vec[MAX];
	int number=0;
	int number2=0;
	int i = 0;
	//int j=0;
	char message = 's';


	for (i = 0; i < MAX; i++) {
		vec[i] = 0;
	}

	do {

		printf("ingrese numero entero: %d \n", i);
		scanf("%d", &number);
		vec[i]=number;

		printf("\n Desea ingresar otro dato S/N? \n");
		fflush(stdin);
		scanf("%c", &message);

	} while (message == 's');

	for (i = 0; i < MAX; i++) {
		vec[i]=number2;
		printf("%d \n", number2);
	}

	//orderPositivesNegatives(number);
	return EXIT_SUCCESS;

}

/*void orderPositivesNegatives(int number[]) {

 int aux;
 for (int i = 0; i < MAX - 1; i++) {
 for (int j = i + 1; j < MAX; j++) {
 if (number[i] > number[j]) {
 aux = number[i];
 number[i] = number[j];
 number[j] = aux;

 }
 }
 }
 for (int j = 0; j < 0; j--) {
 if (number[j] > 0) {
 printf("positives increasing: %d \n", number[j]);
 } else {
 printf("negatives decreasing: %d \n", number[j]);
 }
 }
 }*/
