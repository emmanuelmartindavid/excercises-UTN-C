/*
 ============================================================================
 Name        : ejercicio2-3.c

 We must rent the transport service to get to Mar del Plata with a group of people (no more than 100), from each person we must obtain the following information:
 client number,
 marital status ('s' for single", 'c' for married or 'v' widowed),
 age (only adults, over 17),
 body temperature (validate please)
 and gender('f' for feminine, 'm' for masculine, 'o' for non-binary).
 NOTE: The price per passenger is $600.
 You must report (only if applicable):
 a) The number of people with marital status "widower" over 60 years of age.
 b) the client number and age of the youngest single woman.
 c) how much is the total trip without discount.
 d) if there are more than 50% of the passengers who are over 60 years old, the final price has a discount of 25%, which we only show if applicable.
 ============================================================================
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	setbuf(stdout, NULL);
	char estadoCivil;
	int edad;
	int temperatura;
	char genero;
	int i = 0;
	int edadMenor = 0;
	int contadorMayores = 0;
	int precioTotal;
	int descuento;
	int precioDescuento;
	int numeroCliente;
	int contadorMayor60=60;
	char mensaje = 's';

	do {
		i++;
		system("cls");
		printf(
				"Ingrese estado civil, siendo 's' para soltero 'c' para casado o 'v' viudo: \n");
		scanf("%c", &estadoCivil);
		fflush(stdin);
		while (estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v') {
			printf("Ingrese solo 's', 'c', 'v' \n");
			scanf("%c", &estadoCivil);
			fflush(stdin);
		}

		printf(
				"Ingrese su genero, siendo 'f' para femenino, 'm' para masculino, 'o' para no binario \n");
		scanf("%c", &genero);
		fflush(stdin);
		while (genero != 'f' && genero != 'm' && genero != 'o') {
			printf("Ingrese solo 'f', 'm', 'o' \n");
			scanf("%c", &genero);
			fflush(stdin);
		}

		printf("Ingrese temperatura: \n");
		scanf("%d", &temperatura);
		fflush(stdin);
		while (temperatura < 35 || temperatura > 40) {
			printf("Ingrese temperatura valida \n");
			scanf("%d", &temperatura);
			fflush(stdin);
		}

		printf("Ingrese edad, solo mayores de 18 anos: \n");
		scanf("%d", &edad);
		fflush(stdin);
		while (edad < 18) {
			printf("Ingrese una edad valida \n");
			scanf("%d", &edad);
			fflush(stdin);
		}

		printf("Desea continuar? s/n \n");
		scanf("%c", &mensaje);
		fflush(stdin);
		while (mensaje != 's' && mensaje != 'n') {
			printf("Ingrese solo 's' o 'n' \n");
			scanf("%c", &mensaje);
			fflush(stdin);
		}

		switch (estadoCivil) {
		case 's':
			switch (genero) {
			case 'f':
				if (edadMenor == 0 || edadMenor > edad) {
					edadMenor = edad;
					numeroCliente = i;
				}
				break;
			}
			break;
		case 'v':
			if (edad > 60) {
				contadorMayores++;
			}
			break;

			if (edad > 60) {
				contadorMayor60++;
			}
		}
		precioTotal = i * 600;
//2*			 5             10
		if (2*contadorMayor60 > i) {
			descuento = precioTotal * 0.25;
			precioDescuento = precioTotal - descuento;
		}
		if (i >= 4) {
			mensaje = 'n';
			printf("maximo de 100 pasajeros: \n");
		}

	} while (mensaje == 's');

	if (contadorMayores != 0) {
		printf(
				"cantidad de personas con estado civil viudo de más de 60 años %d \n",
				contadorMayores);
	}
	if (numeroCliente >= 1) {
		printf("numero de cliente %d, edad de mujer soltera mas joven %d \n",
				numeroCliente, edadMenor);
	}
	printf("precio total: %d \n", precioTotal);
	if (2 * contadorMayores > i) {
		printf("Viaje con descuento jubilado: %d \n", precioDescuento);
	}
	return (0);
}
