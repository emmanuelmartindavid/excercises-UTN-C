/*
============================================================================
 Name        : ejercicio2-1.c

Exercise 2-1: Enter 5 whole numbers to calculate and display the average of the numbers. Test the application with different values.
Example 1: 3 - 5 - 7 - 9 - 1
Example 2: 2 - 1 - 8 - 1 - 2
============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
setbuf(stdout, NULL);
int ingreseNumero;
float promedio;
int acumuladorNumero = 0;
int contadorNumero = 0;

for(int i = 0; i<5; i++)
{
	printf("Ingrese numero: ");
	scanf("%d", &ingreseNumero);

	contadorNumero++;
	acumuladorNumero+=ingreseNumero;
	promedio= (float) acumuladorNumero/contadorNumero;

}

   printf("promedio: %.2f", promedio);

return(0);
}
