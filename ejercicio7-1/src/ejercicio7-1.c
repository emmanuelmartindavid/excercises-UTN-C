/*
 ============================================================================
 Una empresa importadora que comercializa productos Apple, decide registrar de sus productos los siguientes datos:
 idProducto (numerico)
 descripcion (alfanumérico)
 nacionalidad (numérico, por el momento utilizaremos un define: EEUU - CHINA - OTRO)
 tipo (numérico, por el momento utilizaremos un define: IPHONE -MAC - IPAD - ACCESORIOS)
 precio (numérico decimal)
 Realizar un programa que permita interactuar con un menú de usuarios con las siguientes opciones:
 ALTA Producto: Se ingresan los datos de UN solo producto. Siempre y cuando haya espacio disponible en el array.
 BAJA Producto: A partir del ingreso del ID. Si existe el producto desaparece de la lista, dejando espacio disponible para un nuevo producto.
 MODIFICACIÓN Producto: A partir del ingreso del ID. Si existe se podrá modificar el precio o el tipo.
 LISTADO Productos.
 LISTADO ordenado por precio.
 LISTADO ordenado por descripción.
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define LEN 1000
int main(void) {

	setbuf(stdout, NULL);
	int pResult;
	int minimum = 1;
	int maximus = 7;
	int retry = 5;
	int returno;

	fflush(stdin);
	do {
		if (utn_getNumber(&pResult, "\n Por favor, ingrese un numero \n \n "
				"\n 1-ALTA Producto:"
				"\n 2-BAJA Producto: "
				"\n 3-MODIFICACIÓN Producto: "
				"\n 4-LISTADO Productos. "
				"\n 5-LISTADO ordenado por precio. "
				"\n 6-LISTADO ordenado por descripción. "
				"\n \n  7-EXIT: \n", "\n Opcion incorrecta\n ", minimum, maximus,
				retry) == 0) {

			switch (pResult) {
			case 1:
				printf("\n Selecciono ALTA Producto: \n \n");
				fflush(stdin);
				break;
			case 2:
				printf("\n \n Selecciono BAJA Producto:  \n \n");
				fflush(stdin);
				break;
			case 3:
				printf("\n \n Selecciono MODIFICACIÓN Producto: \n \n");
				fflush(stdin);
				break;
			case 4:
				printf("\n \n Selecciono LISTADO Productos. \n \n");
				fflush(stdin);
				break;
			case 5:
				printf("\n \n Selecciono LISTADO ordenado por precio. \n \n");
				fflush(stdin);
				break;
			case 6:
				printf(
						"\n \n Selecciono LISTADO ordenado por descripción. \n \n");
				fflush(stdin);
				break;
			case 7:
				printf("\n \n ADIOS \n \n");
				fflush(stdin);
				break;
			}
		}

	} while (pResult != 7);

	if(returno==-1){

				printf("Algo fue mal");
			}

	return EXIT_SUCCESS;
}

