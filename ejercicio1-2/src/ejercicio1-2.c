/*
 ============================================================================
 Name        : ejercicio1-2.c

Exercise 1-2: enter 3 numbers and show which of the three is the largest.
Example:
If we enter 5, 9 and 3 the program will show: "The largest of the numbers is the second"
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

if(numeroUno>numeroDos && numeroUno > numeroTres)
{
 printf("El número mayor es: %d ", numeroUno);
}else if(numeroDos>numeroUno && numeroDos > numeroTres)
{
 printf("El número mayor es: %d ", numeroDos);
}
else
{
 printf("El número mayor es: %d ", numeroTres);
}
return 0;
}
