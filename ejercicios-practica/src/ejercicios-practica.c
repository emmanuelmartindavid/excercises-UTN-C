/*
 ============================================================================
 Name        : ejercicios-practica.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Perform the algorithm that allows entering the data of a purchase of construction products, until the client wants:
 Type valid("sand";"lime";"cement")
 number of bags,
 Price per bag (more than zero),

 If you buy more than 10 bags in total you have a 15% discount on the total to pay.
 If you buy more than 30 bags in total, you have a 25% discount on the total to pay.
 a) The total amount to be paid, gross without discount and...
 b) the total amount to be paid with discount (only if applicable)
 d) Inform the type with the most number of bags.
 f) The most expensive type

 if(acumuladorArena == acumuladorCemento || acumuladorArena == acumuladorCal || acumuladorCemento == acumuladorCal)
 {
 printf("sin mayoria bolsas \n");
 }
 else
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	setbuf(stdout, NULL);
	char bolsas;
	int cantidad;
	int precioBolsa = 0;
	int i = 0;
	int acumuladorArena = 0;
	int acumuladorCal = 0;
	int acumuladorCemento = 0;
	int acumuladorTotal = 0;
	float descuento1 = 0;
	float descuento15 = 0;
	float descuento2;
	float descuento25 = 0;
	int precioTotal;
	int precioArena;
	int precioCemento;
	int precioCal;
	int precioMasCaro = 1;
	char mensaje = 's';

	do {

		i++;

		printf("Ingrese su cumpra siendo 'a' arena, 'c' cemento, 'd' cal: \n");
		scanf("%c", &bolsas);
		fflush(stdin);

		while (bolsas != 'a' && bolsas != 'c' && bolsas != 'd') {
			printf("Ingrese solo 'a', 'c', 'd' \n");
			scanf("%c", &bolsas);
			fflush(stdin);
		}

		printf("Ingrese cantidad de bolsas compradas: \n");
		scanf("%d", &cantidad);

		printf("Ingrese precio de bolsa: \n");
		scanf("%d", &precioBolsa);
		fflush(stdin);
		while (precioBolsa < 1) {
			printf("Ingrese precio valido: \n");
			scanf("%d", &precioBolsa);
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

		switch (bolsas) {
		case 'a':
			acumuladorArena += cantidad;
			precioArena = acumuladorArena * precioBolsa;

			break;
		case 'c':
			acumuladorCemento += cantidad;
			precioCemento = acumuladorCemento * precioBolsa;

			break;
		case 'd':
			acumuladorCal += cantidad;
			precioCal = acumuladorCal * precioBolsa;

			break;
		}
	} while (mensaje == 's');

	acumuladorTotal = acumuladorArena + acumuladorCemento + acumuladorCal;
	precioTotal = precioArena + precioCemento + precioCal;

	if (acumuladorArena > acumuladorCemento
			&& acumuladorArena > acumuladorCal) {
		printf("Mayoria bolsas de arena %d \n", acumuladorArena);
	} else if (acumuladorCemento > acumuladorArena
			&& acumuladorCemento > acumuladorCal) {
		printf("Mayoria bolsas de cemento %d \n", acumuladorCemento);
	} else {
		printf("Mayoria bolsas de Cal %d \n", acumuladorCal);
	}

	if ((precioMasCaro == 1) || (precioMasCaro > precioBolsa)) {
		precioMasCaro = precioBolsa;
		printf("tipo mas caro %d \n", precioMasCaro);

	}

	if (acumuladorTotal > 10 && acumuladorTotal < 30) {
		descuento15 = precioTotal * 0.15;
		descuento1 = precioTotal - descuento15;
		printf("descuento por comprar mas de 10 bolsas: %.2f \n", descuento1);
	} else if (acumuladorTotal > 30) {
		descuento25 = precioTotal * 0.25;
		descuento2 = precioTotal - descuento25;
		printf("descuento por comprar mas de 10 bolsas: %.2f \n", descuento2);
	}

	printf("%d %d %d \n", acumuladorArena, acumuladorCemento, acumuladorCal);
	printf("suma %d \n", acumuladorTotal);
	printf("%d %d %d \n", precioArena, precioCemento, precioCal);
	printf("Precio total bruto %d", precioTotal);

	return (0);
}
