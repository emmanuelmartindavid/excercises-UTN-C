/*
 ============================================================================
 Name        : prueba.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

setbuf(stdout, NULL);
int numero1;
int numero2;
int numero3;
int acumulador1=0;
int acumulador2=0;
int acumulador3=0;
char mensaje='s';

while(mensaje=='s')
{

  printf("ingrese numero 1 \n");
  scanf("%d", &numero1);
  fflush(stdin);

  printf("ingrese numero 2 \n");
  scanf("%d", &numero2);
  fflush(stdin);
  printf("ingrese numero 3 \n");
  scanf("%d", &numero3);
  fflush(stdin);

  printf("finalizar \n");
  scanf("%c", &mensaje);
  fflush(stdin);

acumulador1+=numero1;
acumulador2+=numero2;
acumulador3+=numero3;
}

if(acumulador1==acumulador2)
{
 if(acumulador3>acumulador1)
{
  printf("numero3 más grande %d \n", acumulador3);
}
}else
if(acumulador2==acumulador3)
{
 if(acumulador1>acumulador2)
{
  printf("numero 1 más grande %d \n", acumulador1);
}
}
else
{
 printf("numero 2 más grande %d \n", acumulador2);
}


if(acumulador1>acumulador2 && acumulador1>acumulador3)
{
 printf("numero 1 más grande %d \n", acumulador1);
}
else
if(acumulador2>acumulador1 && acumulador2>acumulador3)
{
printf("numero 2 más grande %d \n", acumulador2);
}
else
{
printf("numero 3 más grande %d \n", acumulador3);
}
return(0);
}
