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
#include "UTN.h"

#define LEN 4
#define MAX_DESCRIPTION 1000
#define EEUU 1
#define CHINA 2
#define OTRO 3
#define IPHONE 1
#define MAC 2
#define IPAD 3
#define ACCESORIOS 4
#define ALTA 1
#define BAJA 0

typedef struct {
	int idProduct;
	char description[MAX_DESCRIPTION];
	int nation;
	int type;
	float price;
	int isEmpty;

} apple;

void initializeProduct(apple products[], int len);
int loadOneProduct(apple products[], int len);
void listOneProduct(apple products[], int len, int index);

int main(void) {
	setbuf(stdout, NULL);
	apple products[LEN];
	initializeProduct(products, LEN);
	int option = 0;
	int index;
	//int i;
do{
	printf("\n Por favor, ingrese un numero \n \n "
			"\n 1-ALTA Producto:"
			"\n 2-BAJA Producto: "
			"\n 3-MODIFICACIÓN Producto: "
			"\n 4-LISTADO Productos. "
			"\n 5-LISTADO ordenado por precio. "
			"\n 6-LISTADO ordenado por descripción. "
			"\n \n  7-EXIT: \n");
	scanf("%d", &option);

	switch (option) {
	case 1:
		printf("\n Selecciono ALTA Producto: \n \n");

		index=loadOneProduct(products, LEN);
			printf("\t\tCarga correcta\n");

			listOneProduct(products, LEN,index);


		break;
	case 2:
		printf("\n \n Selecciono BAJA Producto:  \n \n");

		break;
	case 3:
		printf("\n \n Selecciono MODIFICACIÓN Producto: \n \n");

		break;
	case 4:
		printf("\n \n Selecciono LISTADO Productos. \n \n");

		break;
	case 5:
		printf("\n \n Selecciono LISTADO ordenado por precio. \n \n");
		fflush(stdin);
		break;
	case 6:
		printf("\n \n Selecciono LISTADO ordenado por descripción. \n \n");
		fflush(stdin);
		break;
	case 7:
		printf("\n \n ADIOS \n \n");
		fflush(stdin);
		break;
	}
}while(option!=7);

	return EXIT_SUCCESS;
}

void initializeProduct(apple products[], int len) {

	int i;

	for (i = 0; i < len; i++) {

		products[i].isEmpty = 0;

	}

}

int loadOneProduct(apple products[], int len) {

	int i;
	int ret = -1;

	if (products != NULL && len > 0) {

		for (i = 0; i < len; i++) {

			if (products[i].isEmpty == 0) {
				if (utn_getNumber(&products[i].idProduct,
						"Ingrese ID producto\n", "Solo numeros\n", 0, 10000, 3)
						== 0
						&& utn_getAlfaNumeric(products[i].description,
								"Ingrese descripcion alfanumerica\n",
								"Ingrese caracteres validos\n", 3) == 0
						&& utn_getNumber(&products[i].nation,
								"Ingrese Nacionalidad\n", "Solo numero 1 a 3\n",
								1, 3, 3) == 0
						&& utn_getNumber(&products[i].type, "Ingrese tipo: \n",
								"Solo numero 1 a 4 ", 1, 4, 3) == 0
						&& utn_getNumberFloat(&products[i].price,
								"Ingrese precio: \n", "Solo numeros", 1,
								1000000, 3) == 0) {
					ret = i;
					//printf("\t\tCarga correcta\n");
					products[i].isEmpty = 1;
					break;
				}
			}

		}
	}

	return ret;
}

void listOneProduct(apple products[], int len, int index) {

//	int i=0;

	if (products != NULL && len > 0) {
		//if (products[i].isEmpty != 0) {
			//for (i = 0; i < len; i++) {

		//index=loadOneProduct(products, len);

				printf(
						"id %d, descripcion %s, nacionalidad %d, tipo %d, precio %.2f \n",
						products[index].idProduct, products[index].description,
						products[index].nation, products[index].type,
						products[index].price);

			//}
		//}
	}

}

