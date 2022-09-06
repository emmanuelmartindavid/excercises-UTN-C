/*
 * ejercicioalumnos.c
 *
 *  Created on: 29 ago. 2022
 *  Author: usuario
 *
 Perform the algorithm that allows entering the data of the students of a division of
 the UTN FRA, the data requested are:
 File
 Type studied (L: "free" - P: "face-to-face" – R: "remote")
 Number of subjects (more than zero and less than 8)
 Sex (F: “feminine” – M: “masculine”, O: “non-binary”)
 Average grade (between 0 and 10)
 Age (validate)
 It must be reported if it exists, or report that it does not exist, where appropriate.
 a) The file of the best female average.
 b) The file of the youngest of the male students among those who give free.
 c) The average grade by sex.
 d) The age and file of the person who takes the most subjects. (Regardless of its gender)
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	setbuf(stdout, NULL);
	int legajo;
	int legajoPromedio;
	int edadJoven = 0;
	int legajoJoven;
	char estudiantes;
	int materias;
	char genero;
	int edad;
	int notaPromedio = 0;
	int notaPromedioF = 0;
	char mensaje = 's';
	int acumuladorNotasF = 0;
	int acumuladorNotasM = 0;
	int acumuladorNotasO = 0;
	int contadorF = 0;
	int contadorM = 0;
	int contadorO = 0;
	float promedioF = 0;
	float promedioM = 0;
	float promedioO = 0;
	int materiasMax = 0;
	int edadMaterias = 0;
	int legajoMaterias;

	do {
		printf("ingrese su numero de legajo: \n");
		scanf("%d", &legajo);
		fflush(stdin);
		while (legajo < 0 && legajo > 100) {
			printf("ingrese un legajo valido");
			scanf("%d", &legajo);
			fflush(stdin);
		}

		printf("Tipo cursada libre 'l', presencial 'p', remota 'r': \n");
		scanf("%c", &estudiantes);
		fflush(stdin);
		while (estudiantes != 'l' && estudiantes != 'p' && estudiantes != 'r') {
			printf("Ingrese solo 'l', 'p', 'r' \n");
			scanf("%c", &estudiantes);
			fflush(stdin);
		}

		printf("ingrese cantidad de materias: \n");
		scanf("%d", &materias);
		fflush(stdin);
		while (materias < 0 || materias > 8) {
			printf("solo 8 materias");
			scanf("%d", &materias);
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

		printf("ingrese su nota promedio: \n");
		scanf("%d", &notaPromedio);
		fflush(stdin);
		while (notaPromedio < 0 || notaPromedio > 10) {
			printf("ingrese nota promedio valida");
			scanf("%d", &notaPromedio);
			fflush(stdin);
		}

		printf("Ingrese edad, solo mayores de 18 anos: \n");
		scanf("%d", &edad);
		fflush(stdin);
		while (edad < 18 || edad > 100) {
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

		switch (genero) {
		case 'f':
			acumuladorNotasF += notaPromedio;
			contadorF++;
			promedioF = (float) acumuladorNotasF / contadorF;
			if (notaPromedioF == 0 || notaPromedioF < notaPromedio) {
				notaPromedioF = notaPromedio;
				legajoPromedio = legajo;
			}
			break;
		case 'm':
			acumuladorNotasM += notaPromedio;
			contadorM++;
			promedioM = (float) acumuladorNotasM / contadorM;
			switch (estudiantes) {
			case 'l':
				if (edadJoven == 0 || edadJoven > edad) {
					edadJoven = edad;
					legajoJoven = legajo;
				}
				break;
			}
			break;
		case 'o':
			acumuladorNotasO += notaPromedio;
			contadorO++;
			promedioO = (float) acumuladorNotasO / contadorO;
			break;
		}
		if (materiasMax == 0 || materiasMax < materias) {
			materiasMax = materias;
			edadMaterias = edad;
			legajoMaterias = legajo;
		}
	} while (mensaje == 's');

	printf("promedio mas alto femenino %d %d %d %.2f %.2f %.2f %d %d: \n",
			notaPromedioF, legajoPromedio, legajoJoven, promedioF, promedioM,
			promedioO, edadMaterias, legajoMaterias);

	return (0);
}
