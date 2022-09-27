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
#include <ctype.h>
#include "UTN.h"

#define OK 1
#define ERROR -1
#define CANTIDAD_CLIENTES 100
#define CANTIDAD_PEDIDOS 1000
#define OCCUPIED 1
#define FREE 0
#define DOWN -1

#define LEN 2
#define MAX_DESCRIPTION 1000
#define EEUU 1
#define CHINA 2
#define OTRO 3
#define IPHONE 1
#define MAC 2
#define IPAD 3
#define ACCESORIOS 4

typedef struct {
	int idProduct;
	char description[MAX_DESCRIPTION];
	int nation;
	int type;
	float price;
	int isEmpty;

} apple;

int initializeProduct(apple products[], int len);
int loadOneProduct(apple products[], int len);
int findById(apple products[], int len, int idProduct);
int downProduct(apple products[], int len);
void listOneProduct(apple products[]);
void listProducts(apple products[], int len);

int main(void) {
	setbuf(stdout, NULL);
	apple products[LEN];

	int option = 0;
	int index;
	//int i;
	int retorno;
	do {
		initializeProduct(products, LEN);
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

			//	index = loadOneProduct(products, LEN);
			retorno= loadOneProduct(products, LEN);
			//printf("\t\tCarga correcta\n");
			if(retorno==0){
			listOneProduct(products);
			}

			break;
		case 2:
			//printf("\n \n Selecciono BAJA Producto:  \n \n");

//			retorno=downProduct(products, LEN);
//			printf("ID POSICION FINDBYID %d \n", retorno);
			printf("ANTES DE FUNCION %d\n", retorno);
			findById(products, LEN, products[index].idProduct);

			if (downProduct(products, LEN) == OK) {

				printf("\t\tSe borro piola\n");
				printf("DESPUES BORRAR ID %d", retorno);
			}

			break;
		case 3:
			printf("\n \n Selecciono MODIFICACIÓN Producto: \n \n");

			break;
		case 4:
			printf("\n \n Selecciono LISTADO Productos. \n \n");
			if(retorno==0){
			listProducts(products, LEN);
			}
			break;
		case 5:
			printf("\n \n Selecciono LISTADO ordenado por precio. \n \n");

			break;
		case 6:
			printf("\n \n Selecciono LISTADO ordenado por descripción. \n \n");

			break;
		case 7:
			printf("\n \n ADIOS \n \n");

			break;
		}
	} while (option != 7);

	return EXIT_SUCCESS;
}

int initializeProduct(apple products[], int len) {

	int i;
	int ret = -1;
	if (products != NULL && len > 0) {
		for (i = 0; i < len; i++) {

			products[i].isEmpty = FREE;
			ret = 0;

		}
	}

	return ret;
}

int loadOneProduct(apple products[], int len) {

	int i;
	int ret = -1;

	if (products != NULL && len > 0) {

		for (i = 0; i < len; i++) {
			if (products[i].isEmpty == FREE) {
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

					products[i].isEmpty = OCCUPIED;
					ret = 0;
					//break;
				}
			}

		}
	}

	return ret;
}

//  BAJA Producto: A partir del ingreso del ID. Si existe el producto desaparece de la lista, dejando espacio disponible para un nuevo producto.

int findById(apple products[], int idProduct, int len) {
	int ret = -1;
	int i;
	if (products != NULL && len > 0) {
		for (i = 0; i < len; i++) {
			if (products[i].idProduct
					== idProduct&& products[i].isEmpty== OCCUPIED) {
				ret = i;
				break;
			}
		}
	}

	return ret;
}

int downProduct(apple products[], int len) {
	int ret = ERROR;
	char buffer;
	int idClienteaux;
	int index;

	if (products != NULL && len > 0) {
		fflush(stdin);
		printf("Desea dar de baja un producto? s/n: ");
		scanf("%c", &buffer);
		fflush(stdin);

		if (isalpha(buffer) && buffer == 's') {
			fflush(stdin);
			utn_getNumber(&idClienteaux, "Ingrese el ID del producto",
					"Ingreso numero invalido.", 0, 10000, 3);
		} else {

			printf("No se dara de baja ningun producto.\n");
			ret = ERROR;
			fflush(stdin);
		}
		while (findById(products, idClienteaux, len) == -1) {

			printf("NO EXISTE ID.");

			utn_getNumber(&idClienteaux, "Ingrese el ID del producto",
					"Ingreso numero invalido.", 0, 10000, 3);
		}

		index = findById(products, idClienteaux, len);
		fflush(stdin);
		printf("Se dara de baja, continuar? s/n: ");
		scanf("%c", &buffer);
		fflush(stdin);
		if (isalpha(buffer) && buffer == 's') {
			fflush(stdin);
			products[index].isEmpty = DOWN;
			ret = OK;
		} else {
			printf("No se dio de baja ningun producto.\n");
			ret = ERROR;
			fflush(stdin);
		}

	}

	return ret;

}

void listOneProduct(apple products[]) {

	int i = 0;

	if (products != NULL) {
		//&& products[i].isEmpty == OCCUPIED
		printf("id %d,\n"
				"descripcion %s,\n"
				"nacionalidad %d,\n"
				"tipo %d,\n"
				"precio %.2f\n", products[i].idProduct, products[i].description,
				products[i].nation, products[i].type, products[i].price);
	}

}

void listProducts(apple products[], int len) {

	int i = 0;

	if (products != NULL && len > 0) {
		//if (products[i].isEmpty == OCCUPIED) {
			for (i = 0; i < len; i++) {

				listOneProduct(products[i]);

//		printf(
//				"id %d, descripcion %s, nacionalidad %d, tipo %d, precio %.2f \n",
//				products[i].idProduct, products[i].description,
//				products[i].nation, products[i].type,
//				products[i].price);

			}
		//}
	}

}

//
//

//
//
//
////Nos retorna el indice donde tenemos diponible (isEmpty en 0)
////para cargar un cliente
//int searchClienteEmpty(s_cliente clientes[], int cantidad) {
//	int retorno = ERROR;
//	int i;
//	if (clientes != NULL && cantidad > 0) {
//		for (i = 0; i < cantidad; i++) {
//			if (clientes[i].isEmpty == 0) {
//				return i;
//			}
//		}
//	}
//	return retorno;
//}
//
//int cargarNombreCliente(s_cliente clientes[], int index) {
//	char buffer[1024];
//	int retorno = -1;
//
//	if (clientes != NULL && index > 0) {
//		if (utn_getString("Ingrese el nombre de la empresa: \n",
//				"Nombre no valido.\n", buffer) == 0) {
//			strcpy(clientes[index].nombreEmpresa, buffer);
//			retorno = 0;
//		}
//	}
//
//	return retorno;
//}
//
//int cargarCuilCliente(s_cliente clientes[], int index) {
//	char buffer[1024];
//	int retorno = -1;
//
//	if (clientes != NULL && index > 0) {
//		if (utn_getCuil("Ingrese su CUIT xx-xxxxxxxx-x: \n",
//				"Dato no valido.\n", buffer) == 0) {
//			strcpy(clientes[index].cuitCliente, buffer);
//			retorno = 0;
//		}
//	}
//
//	return retorno;
//}
//
//int cargarDireccionCliente(s_cliente clientes[], int index) {
//	char buffer[1024];
//	int retorno = -1;
//
//	if (clientes != NULL && index > 0) {
//		if (utn_getString("Ingrese la calle de la empresa: \n",
//				"Calle no valido.\n", buffer) == 0) {
//			strcpy(clientes[index].direccion, buffer);
//			retorno = 0;
//		}
//	}
//
//	return retorno;
//}
//
//int cargarLocalidadCliente(s_cliente clientes[], int index) {
//	char buffer[1024];
//	int retorno = -1;
//
//	if (clientes != NULL && index > 0) {
//		if (utn_getString("Ingrese la localidad: \n", "Localidad no valido.\n",
//				buffer) == 0) {
//			strcpy(clientes[index].localidad, buffer);
//			retorno = 0;
//		}
//	}
//
//	return retorno;
//}
//
//int cargarAlturaCliente(s_cliente clientes[], int index) {
//	int auxiliar;
//	int retorno = -1;
//
//	if (clientes != NULL && index > 0) {
//		if (utn_getNumber(&auxiliar, 12000, 1, 2,
//				"Ingrese la altura de la calle:\n", "Altura no valida") == 0) {
//			clientes[index].altura = auxiliar;
//			retorno = 0;
//		}
//	}
//
//	return retorno;
//}
//
////Da de alta un cliente recibe la posicion donde lo carga
//int altaCliente(s_cliente clientes[], int index, int idCliente) {
//	int retorno = ERROR;
//
//	if (clientes != NULL && index > 0 && idCliente > 0) {
//
//		//Por que poner todas las cargas con &&, por que si la carga de algun campo falla
//		//quiero que falle tOdOO, no puedo cargar datos de la struct por la mitad
//		if (cargarNombre(clientes, index) == 0
//				&& cargarCuilCliente(clientes, index) == 0
//				&& cargarDireccionCliente(clientes, index) == 0
//				&& cargarAlturaCliente(clientes, index)
//				&& cargarLocalidadCliente(clientes, index) == 0) {
//			clientes[index].isEmpty = 1;
//			clientes[index].idCliente = idCliente;
//			printf("El alta del cliente con id %d fue correcta.\n",
//					clientes[index].idCliente);
//			retorno = OK;
//		} else {
//			printf("No se pudo realizar el alta, algun campo incorrecto.\n");
//		}
//	}
//
//	return retorno;
//}
//
//int modificarCliente(s_cliente clientes[]) {
//	int retorno = ERROR;
//	int idCliente;
//	int auxiliar;
//	int index;
//	char buffer[1024];
//	int opcion = 0;
//	if (clientes != NULL && cantidad > 0) {
//		if (utn_getNumber(&idCliente, 60000, 0, 2,
//				"Ingrese el id del cliente.\n", "Dato no valido.\n") == 0) {
//			index = buscarClientePorId(clientes, idCliente);
//
//			utn_getNumber(&opcion, 2, 1, 2,
//					"Ingrese 1 para modificar direccion 2 para modificar localidad",
//					"Ingreso no valido");
//			switch (opcion) {
//			case 1:
//				if (utn_getString("Ingrese la calle de la empresa: \n",
//						"Calle no valido.\n", buffer) == 0) {
//					strcpy(clientes[index].direccion, buffer);
//				} else {
//					break;
//				}
//				if (utn_getNumber(&auxiliar, 12000, 1, 2,
//						"Ingrese la altura de la calle:\n", "Altura no valida")
//						== 0) {
//					clientes[index].altura = auxiliar;
//				} else {
//					break;
//				}
//				break;
//			case 2:
//				if (utn_getString("Ingrese la localidad de la empresa: \n",
//						"Localidad no valido.\n", buffer) == 0) {
//					strcpy(clientes[index].localidad, buffer);
//				} else {
//					break;
//				}
//				break;
//			default:
//				printf("No ingreso una opcion valida.");
//				break;
//			}
//		}
//
//	}
//
//	return retorno;
//}
//
//int buscarClientePorId(s_cliente clientes[], int idCliente) {
//	int retorno = -1;
//	int i;
//	if (clientes != NULL) {
//		for (i = 0; i != idCliente; i++) {
//			if (clientes[i].idCliente == idCliente) {
//				return i;
//			}
//		}
//	}
//	return retorno;
//}
//
//int listarClientes(s_cliente clientes[], int cantidad) {
//	int retorno = ERROR;
//	int i;
//	int flag = 0;
//	if (clientes != NULL && cantidad > 0) {
//		for (i = 0; i < cantidad; i++) {
//			if (clientes[i].isEmpty == 1) {
//				printf(
//						"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n"
//								"El nombre es: %s\n" "El CUIT es: %s\n"
//								"La direccion es: %s %d\nLa localidad es %s.\nEl id es: %d.\n"
//								"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n",
//						clientes[i].nombreEmpresa, clientes[i].cuitCliente,
//						clientes[i].direccion, clientes[i].altura,
//						clientes[i].localidad, clientes[i].idCliente);
//				retorno = OK;
//				flag = 1;
//			}
//		}
//		if (flag == 0) {
//			printf("No hay clientes a listar.\n");
//		}
//	}
//	return retorno;
//}
//
//int bajaCliente(s_cliente clientes[]) {
//	int retorno = ERROR;
//	char buffer;
//	int idClienteaux;
//	int index;
//	if (clientes != NULL) {
//		utn_getString("Desea dar de baja un cliente? s/n: ", "Opcion no valida",
//				&buffer);
//		if (buffer == 's') {
//			utn_getNumber(&idClienteaux, 6000, 100, 2,
//					"Ingrese el ID del cliente", "Ingreso invalido.");
//			buffer == 'n';
//		} else {
//			printf("No se dara de baja ningun cliente.\n");
//			return retorno;
//		}
//		utn_getString("Se dara de baja, continuar? s/n: ", "Opcion no valida",
//				&buffer);
//		index = buscarClientePorId(clientes, idClienteaux);
//		if (buffer == 's') {
//			clientes[index].isEmpty = 0;
//			retorno = OK;
//		} else {
//			printf("No se dio de baja ningun cliente.\n");
//			return retorno;
//		}
//	}
//
//	return retorno;
//
//}
//
//int bucarClienteExistente(s_cliente clientes[], int cantidad, int *idParaAlta) {
//	int retorno = ERROR;
//	int i;
//	int auxiliarIdCliente;
//	if (clientes != NULL && cantidad > 0) {
//		if (utn_getNumber(&auxiliarIdCliente, 2000, 100, 2,
//				"Ingrese id cliente:\n", "Id no fue ingresado correctamente\n")
//				== 0) {
//			for (i = 0; i < cantidad; i++) {
//				if (clientes[i].idCliente == auxiliarIdCliente) {
//					*idParaAlta = auxiliarIdCliente;
//					retorno = OK;
//				}
//			}
//		}
//	}
//	return retorno;
//}
//
//void ordenarClientesPorId(s_cliente clientes[], int len) {
//	int i;
//	s_cliente auxiliarCliente;
//	int s = 1;
//	if (clientes != NULL && len > 0) {
//		while (s) {
//			s = 0;
//			for (i = 1; i < len; i++) {
//				if (clientes[i].idCliente < clientes[i - 1].idCliente) {
//					auxiliarCliente = clientes[i];
//					clientes[i] = clientes[i - 1];
//					clientes[i - 1] = auxiliarCliente;
//					s = 1;
//				}
//			}
//		}
//	}
//}
//
