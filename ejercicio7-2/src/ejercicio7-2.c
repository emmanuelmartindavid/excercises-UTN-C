/*
 ============================================================================
Crear la estructura Jugador (nombre, goles metidos, partidos jugados, promedio de goles).
Crear una función que permita cargar los datos de un jugador y otra que los muestre.
Una tercera función calculará el promedio de goles.
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 30

typedef struct {
	char name[LEN];
	int goals;
	int matches;
	float averageGoals;
}player;

void load();
void show();
void calculateAverage();

int main(void) {
	setbuf(stdout, NULL);
	load();
	show();
	calculateAverage();

	return EXIT_SUCCESS;
}

void load(player inputs){
	printf("Ingrese su nombre: \n");
	fflush(stdin);
	fgets(inputs.name, sizeof(inputs.name), stdin);
	inputs.name[strlen(inputs.name)-1]='\0';
	printf("Ingrese los goles: \n");
	scanf("%d", &inputs.goals);
	printf("Ingrese los partidos: \n");
	scanf("%d", &inputs.matches);
}

void show(player inputs){
	printf("Nombre %s, goles %d, partidos %d", inputs.name, inputs.goals, inputs.matches);
}

void calculateAverage(player inputs){
	inputs.averageGoals=(float)inputs.goals/inputs.matches;
	printf("\nPromedio es %.2f", inputs.averageGoals);
}
