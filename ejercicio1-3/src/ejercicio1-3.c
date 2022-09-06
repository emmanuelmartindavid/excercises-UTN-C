/*
 ============================================================================
 Name        : ejercicio1-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En caso de que no exista también informarlo.
Ejemplo:
1   5   3     el 3 es del medio
5   1   5    no hay numero del medio
3   5   1     el 3 es del medio

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
setbuf(stdout, NULL);
int numeroUno;
int numeroDos;
int numeroTres;

printf("Ingrese número uno: ");
scanf("%d", &numeroUno);
printf("Ingrese número dos: ");
scanf("%d", &numeroDos);
printf("Ingrese número tres: ");
scanf("%d", &numeroTres);

if (numeroUno==numeroDos || numeroDos==numeroUno || numeroTres==numeroDos)
{
printf ("No hay número medio");
}
else if((numeroUno>numeroDos && numeroUno<numeroTres) || (numeroUno < numeroDos && numeroUno > numeroTres))
{
printf ("el número del medio es, %d", numeroUno);
}
else if((numeroDos>numeroUno && numeroDos<numeroTres) || (numeroDos < numeroUno && numeroDos > numeroTres))
{
printf ("el número del medio es, %d", numeroDos);
}
else
{
printf ("el número del medio es: %d", numeroTres);
}
return 0;
}
