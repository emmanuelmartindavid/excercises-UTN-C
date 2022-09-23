
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
/*void initializeArray(int array[]);
 void Sequentialload(int array[]);
 void showLoadNumbers(int array[]);
 int showJustOneNumber(int array[]);
 //float averageNumbers(int array[]);
 int averageNumbers(int array[], float* average);
 void showMenu();*/

int initializeArray(int array[], int len) {

	int ret=-1;
	if (array != NULL && len>0) {
		for (int i = 0; i < 5; i++) {
			array[i] = 0;
			ret=0;
		}
	}
	return ret;
}

void Sequentialload(int array[], int len) {

	printf("Load 5 ages:\n ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &array[i]);
	}
	printf("Edades cargadas");
}

/*void AleatoryLoad(int vec[]) {

 int position = 0;
 int message = 's';
 do {
 printf("Load position: \n");
 scanf("%d", &position);
 printf("Load 5 ages: \n ");
 scanf("%d", &vec[position - 1]);
 printf("do you want to continue? y-n \n");
 scanf("%d", &message);
 } while (message == 's');

 }*/

void showLoadNumbers(int array[], int len) {
	printf("listed numbers: \n");
	for (int i = 0; i < len; i++) {
		showJustOneNumber(array[i]);
	}
}

void showJustOneNumber(int number) {

	printf("%d\n", number);

}

int averageNumbers(int array[], float* average, int len) {
// PUNTERO ACA *

	int correct = 0;
	int acumulator = 0;
	if (array!=NULL && average!=NULL && len>0) {
		for (int i = 0; i < len; i++) {
			acumulator += array[i];
			*average = (float) acumulator / len;
		}
	} else {
		correct = 1;
	}
	return correct;
}

int showMenu() {
//printf("Welcome. Be gladd to enter whatherever you wish to do \n");
	int options;


	printf("1-Initialize \n");
	printf("2-Load \n");
	printf("3-Show \n");
	printf("4-Calculate Average \n");
	printf("5-Order \n");
	printf("Press 6 to exit menu \n");
	printf("\n \n Enter option: ");
	scanf("%d", &options);


	return options;
}

/*void averageNumbers(int vec[]){

 float average=0;
 int acumulator=0;
 for (int i = 0; i < 5; i++) {
 acumulator+=vec[i];
 average= (float)acumulator/5;
 }
 printf("The average is: %.2f \n", average);
 }*/

/*void orderBubbleNumber(int number[]) {

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
 printf("Secuencial ages : %d \n", number[j]);
 }
 }*/

/*void OrderInsertionNumber(int data[], int len, int number[]) {
 int i, j;
 int temp;
 for (i = 1; i < len; i++) {
 temp = data[i];
 j = i - 1;
 while (j >= 0 && temp < data[j]) // temp<data[j] o temp>data[j]
 {
 data[j + 1] = data[j];
 j--;
 }
 data[j + 1] = temp; // inserción
 }

 for (int j = 0; j < 5; j++) {
 printf("Secuencial ages : %d \n", number[j]);
 }
 }*/

/*void menuprincipal(int age[]) {
 setbuf(stdout, NULL);

 int options;
 do {
 menu();
 scanf("%d", &options);
 switch (options) {
 case 1:
 printf("You have selected the option. 1-Initialize \n");
 initializeArray(age);

 break;
 case 2:
 printf("You have selected the option. 2-Load \n");
 Sequentialload(age);
 //AleatoryLoad(age);
 break;
 case 3:
 printf("You have selected the option. 3-Show \n");
 showLoadNumbers(age);
 break;
 case 4:
 printf("You have selected the option. 4-Calculate Average \n");
 averageNumbers(age);
 break;
 case 5:
 printf("You have selected the option. 5-Order \n");
 break;
 }
 } while (options != 6);

 }*/

/*float averageNumbers(int array[]) {
 // PUNTERO ACA *
 float average = 0;
 int acumulator = 0;
 for (int i = 0; i < 5; i++) {
 acumulator += array[i];
 average = (float) acumulator / 5;
 }

 return average;
 }*/

/*
 int menu(int array[], float average) {
 setbuf(stdout, NULL);

 int options;
 do {
 showMenu();
 scanf("%d", &options);
 switch (options) {
 case 1:
 printf("You have selected the option. 1-Initialize \n");
 initializeArray(array);
 break;
 case 2:
 printf("You have selected the option. 2-Load \n");
 Sequentialload(array);
 //AleatoryLoad(age);
 break;
 case 3:
 printf("You have selected the option. 3-Show \n");
 showLoadNumbers(array);
 break;
 case 4:
 printf("You have selected the option. 4-Calculate Average \n");
 if()

 average = averageNumbers(array);
 //printf("Average inside case 4  is: %.2f \n", average);
 break;
 case 5:
 printf("You have selected the option. 5-Order \n");
 break;

 }
 } while (options != 6);

 //average=averageNumbers(age);
 printf("Average outside while is: %.2f \n", average);

 return average;
 }*/

