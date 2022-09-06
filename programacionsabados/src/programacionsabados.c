/*
 ============================================================================
 Name        : programacionsabados.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
Crear una función que le solicite al usuario el ingreso de un numero y lo retorne.
Ejercicio 2:
Crear una función que reciba como parámetro dos números enteros, que realice el promedio de los números y que retorne dicho valor.
Ejercicio 3:
Crear una función que reciba como parámetro un número entero. La función retorna 1 en caso de que sea positivo,
-1 en caso de que sea negativo y 0 en caso de que sea 0. Realizar la prueba lógica de la función en el main.

 Write a program that allows the input of 10 integers.
 Determine:
 The average of the positive
 the number of zeros
 From the smallest of the negatives, the sum of the predecessors of that value (stop 0)
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

float promedioDeLosPositivos(int, int);

int main(void) {
	setbuf(stdout, NULL);
	int numero;
	int contadorCero = 0;
	float resultadoPromedio;
	int acumulador = 0;
	int minimoNegativo = 0;
	int i = 0;
	int r;
	int acumuladorNegativoMinimo = 0;
	int contadorPositivos = 0;
	int flag = 0;
	int minimoNegativonuevo = 0;

	//do{
	for (i = 0; i < 5; i++) {
		printf("ingrese los numeros: ");
		fflush(stdin);
		scanf("%d", &numero);

		if (numero == 0) {
			contadorCero++;
		} else if (numero > 0) {
			acumulador += numero;
			contadorPositivos++;
		} else if (flag == 0 || numero < minimoNegativo) {
			minimoNegativo = numero;
			minimoNegativonuevo = minimoNegativo + 1;
			flag = 1;
		}
	}
	resultadoPromedio = promedioDeLosPositivos(acumulador, contadorPositivos);
	//for ( let i = 10; i >0 ; i --)
	for (r = minimoNegativonuevo; r < 0; r++) {
		acumuladorNegativoMinimo += r;
	}
	if(acumulador>0){
	printf("%.2f promedio\n", resultadoPromedio);
	}if(contadorCero>0){
	printf("%d contador de ceros\n", contadorCero);
	}
	if(flag==1){
	printf("%d minimo negativo\n", minimoNegativo);
	printf("%d la suma de los antecesores del minimo negativo\n",
			acumuladorNegativoMinimo);
	}

	return 0;
}

float promedioDeLosPositivos(int acumuladorNumero, int contador) {

	float promedio;

	promedio = (float) acumuladorNumero / contador;

	return promedio;
}

// funcion para ingresar numero
int ingresarvalor(void){

	int i;
	int numero;
	for (i = 0; i < 5; i++) {
		printf("ingrese los numeros: ");
		fflush(stdin);
		scanf("%d", &numero);
	}

		return numero;
}
/*int sumaAntecesores(int numero) {
 int suma;

 suma = numero + 1;

 return suma;
 }


 int numeroEntero(int numeroEntero) {
 int retornamos;
 if (numeroEntero > 0) {
 retornamos = 1;
 } else {
 if (numeroEntero < 0) {
 retornamos = -1;
 } else {
 retornamos = 0;
 }
 }
 return retornamos;
 }
 int main(void) {
 setbuf(stdout, NULL);
 int number;
 int i;
 int counterPositives = 0;
 int acumulatorPositives = 0;
 int average;
 int counterZeros = 0;
 int minimumNegative = 0;
 int acumulatorNegativesNumbers = 0;

 for (i = 0; i < 10; i++) {
 printf("Enter number: \n");
 scanf("%d", &number);
 if (number > 0) {
 counterPositives++;
 acumulatorPositives += number;
 } else if (number == 0) {
 counterZeros++;
 } else if (number < 0 || minimumNegative < number) {

 minimumNegative = number;

 }
 for (minimumNegative = 0; minimumNegative < number; minimumNegative++) {
 acumulatorNegativesNumbers += number;

 }

 }

 average = acumulatorPositives / counterPositives;

 printf("%d \n", average);
 printf("%d \n", counterZeros);
 printf("%d \n", acumulatorNegativesNumbers);
 return 0;
 }
 FUNCION INGRESAR 10 NUMEROS
 int ingresar10Valores(int numero)
 {
 int i;
 for(i=0;i<10;i++)
 {
 printf("ingrese los numeros: ");
 scanf("%d",&numero);
 }
 return i;
 }*/
