/*
 ============================================================================
 Pedirle al usuario su nombre y apellido (en variables separadas,
 una para el nombre y otra para el apellido). Ninguna de las dos variables se puede modificar.
 Debemos lograr guardar en una tercer variable el apellido
 y el nombre con el siguiente formato:

 Por ejemplo:
 Si el nombre es juan ignacio y el apellido es gOmEz, la salida debería ser:
 Gomez, Juan Ignacio

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 50
int main(void) {

	setbuf(stdout, NULL);
	char name[LEN];
	char subname[LEN];
	char subnameNew[LEN];
	//char buffer[LEN];


	printf("Enter first name: \n");
	fflush(stdin);
	fgets(name, sizeof(name), stdin);
	name[strlen(name)-1]='\0';
	printf("Enter subname: \n");
	fflush(stdin);
	fgets(subname, sizeof(subname), stdin);
	subname[strlen(subname)-1]='\0';
	//strcmp COMPARA STRINGS Y RETORNA 0 SI SON IGUALES, MAS DE 1 SI EL PRIMERO ES MAYOR, MENOR A 0 SI EL SEGUNDO ES MAYOR AL PRIMERO
	//A NO SER QUE SEA AB, BA, ONDA ALFABETO, ORDEN ALFABETICO
	//, sizeof(subname)
	strncpy(subnameNew, subname, sizeof(subname));
	//strcpy(subname, name);

	printf("%s, %s", subnameNew, name);

	return EXIT_SUCCESS;
}
