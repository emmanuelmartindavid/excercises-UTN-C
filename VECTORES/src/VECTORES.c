/*
 ============================================================================
 Name        : VECTORES.c
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
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>


/*#define MAX 5
 #define MIN -5
 //void insertion(int data[],int len);
 int main(void) {
 setbuf(stdout, NULL);
 int number[10];
 int i;
 for (i = 0; i < 10; i++) {
 printf("Enter 10 numbers between -1000 and 1000: \n");
 //scanf("%d", &number);
 //	while (number < -1000 || number > 1000) {
 printf("just numbers between -1000 and 1000");
 scanf("%d", &number);
 number[i];

 }
 }
 return 0;
 }*/

/*void insertion(int data[],int len)+
 {
 int i,j;
 int temp;
 for(i=1;i<len;i++)
 {
 temp = data[i];
 j=i-1;
 while(j>=0 && temp<data[j]) // temp<data[j] o temp>data[j]
 {
 data[j+1] = data[j];
 j--;
 }
 data[j+1]=temp; // inserción
 }
 printf("%d", temp);

 return;
 }*/

/*int edad[MAX], i;
 float sueldo[MAX], suma = 0, prom, aux;

 for (i = 0; i < 100; i++) {
 printf("Ingrese edad para el legajo %d", i + 1);
 scanf("%d", &edad[i]);
 fflush(stdin);
 printf("Ingrese sueldo para el legajo %d", i + 1);
 scanf("%f", &sueldo[i]);
 fflush(stdin);
 }

 for (i = 0; i < MAX; i++) {
 printf("Ingrese la edad del legajo %d: ", i + 1);
 scanf("%d", &edad[i]);
 fflush(stdin);
 printf("Ingrese el sueldo del legajo %d: ", i + 1);
 scanf("%f", &aux);
 fflush(stdin);
 sueldo[i] = aux;
 }
 for (i = 0; i < MAX; i++)
 suma = suma + sueldo[i];
 prom = suma / MAX;
 printf("El sueldo promedio es %.2f", prom);*/
