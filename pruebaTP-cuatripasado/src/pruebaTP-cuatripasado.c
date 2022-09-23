/*
 ============================================================================
 Name        : pruebaTP-cuatripasado.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "validations.h"
#include "functions.h"

#define LEN 100000000
int main(void) {
	setbuf(stdout, NULL);

	int options;
	int minimum = 1;
	int maximus = 6;
	int retry = 3;
	float minimumKM = 1;
	float maximusKM = 10000000;
	int retryKM = 3;
	float KM;
	float priceAerolineas;
	float minimumPriceAerolineas = 1;
	float maximusPriceAerolineas = 10000000;
	int retryPriceAerolineas = 3;
	float priceLatam;
	float minimumPriceLatam = 1;
	float maximusPriceLatam = 100000000;
	int retryPriceLatam = 3;
	float priceDebit = 0;

	do {
		if (utn_getNumber(&options, "\n Por favor, ingrese un numero \n \n "
				"\n 1. Ingresar kilometros : {km=x}) \n"
				"\n 2. Ingresar Precio de Vuelos: {Aerolines=y, Latam=z} \n"
				"\n 3. Calcular todos los costos:\n "
				"\n 4. Informar Resultados \n  "
				"\n 5. Carga forzada: \n"
				"\n 6. SALIR \n", "\n Opcion incorrecta\n ", minimum, maximus,
				retry) == 0)
			switch (options) {

			case 1:
				if (utn_getNumberFloat(&KM,
						"\n 1. Ingresar kilometros : {km=x}) \n"
								" \n", "\n Opcion incorrecta\n ", minimumKM,
						maximusKM, retryKM) == 0)
					printf("LOS KM INGRESADOS SON %.2f", KM);

				break;
			case 2:
				if (utn_getNumberFloat(&priceAerolineas,
						"\n 2. Ingrese precio de  AEROLINEAS \n"
								"\n Precio vuelo Aeorilineas \n"
								" \n", "\n Opcion incorrecta\n ",
						minimumPriceAerolineas, maximusPriceAerolineas,
						retryPriceAerolineas) == 0)
					printf("El precio ingresado de AEROLINEAS es: %.2f \n",
							priceAerolineas);
				if (utn_getNumberFloat(&priceLatam,
						"\n 2. Ingrese precio de vuelo LATAM \n"
								"\n Precio vuelo LATAM \n"
								" \n", "\n Opcion incorrecta\n ",
						minimumPriceLatam, maximusPriceLatam, retryPriceLatam)
						== 0)
					printf("El precio ingresado de LATAM es: %.2f \n",
							priceLatam);
				break;
			case 3:
				priceDebit = calculateDebitPriceAerolineas(priceAerolineas,
						KM);
				printf("El precio de AEROLINEAS es %.2f \n ", priceDebit);
				priceDebit = calculateDebitPriceLatam(priceLatam, KM);
				printf("El precio de LATAM es %.2f \n ", priceDebit);

				printf("3. Calcular todos los costos \n "
						"a) Tarjeta de debito: \n "
						"b)Tarjeta de credito: \n "
						"c) Bitcoin: \n "
						"d) Mostrar precio por km: "
						"\n e) Mostrar diferencia de precio ingresada: \n ");
				break;
			case 4:
				printf("4. Mostrar KM ingresados: \n"
						"Informar Resultados \n "
						"Latam \n "
						"a) Precio con tarjeta de debito: r \n "
						"b) Precio con tarjetia de credito: r \n "
						"c)Precio pagando con bitcoin: r \n "
						"d) Mostrar precio unitario: r "
						"\n Aerolineas \n "
						"a) Precio con tarjeta de debito: r \n "
						"b) Precio con tarjetia de credito: r \n "
						"c)Precio pagando con bitcoin: r \n "
						"d) Mostrar precio unitario: r \n "
						"\n La diferencia de precio:r \n");
				break;
			case 5:
				printf("5. Carga forzada \n");
				fflush(stdin);
				break;
			case 6:
				printf("Exit");
				break;
			}
	} while (options != 6);
	return EXIT_SUCCESS;
}
