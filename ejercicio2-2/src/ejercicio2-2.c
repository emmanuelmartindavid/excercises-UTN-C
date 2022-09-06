/*
 ============================================================================
 Name        : ejercicio2-2.c

Enter 10 whole numbers, non-zero. To show:
Number of odd and even.
The smallest number entered.
Of the pairs the greater number entered.
Sum of the positives.
Product of the negatives.
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);
	int numero;
	int parMayor = 0;
	int numeroMenor = 0;
	int acumuladorPositivos = 0;
	int contadorPar = 0;
	int contadorImpar = 0;
	int acumuladorNegativos = 1;


		for(int i = 0; i<10; i++)
		{

		 printf("ingrese numero entero: ");
		 scanf("%d", &numero);
		 fflush(stdin);
		do{
		 printf("ingrese numero distinto de 0: ");
		 scanf("%d", &numero);
		 fflush(stdin);
		}while(numero==0);

		  if (numero % 2 == 0)
		  {
			contadorPar++;

			if(parMayor == 0 || parMayor < numero)
			{
				parMayor=numero;
			}
		  }
		  else
		  {
			contadorImpar++;
		  }
		  if(numero>0)
		  {
			acumuladorPositivos+=numero;
		  }
		  else
		  {
			acumuladorNegativos*=numero;
		  }
		  if(numeroMenor == 0 || numeroMenor > numero)
		  {
			  numeroMenor=numero;
		  }

		}
		printf("suma positivos %d \n", acumuladorPositivos);
		printf("El par mayor %d \n", parMayor);
		printf("cantidad pares %d \n", contadorPar);
		printf("cantidad impares %d \n", contadorImpar);
		printf("producto de negativos %d \n", acumuladorNegativos);
		printf("menor numero ingresado %d", numeroMenor);

		return(0);
	}
