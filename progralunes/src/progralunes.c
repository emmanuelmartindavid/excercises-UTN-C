/*
 ============================================================================
 Name        : progralunes.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

receive integer return 1 if positive, -1 if negative, 0 if positive
 test the logic in the main
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int determinarSigno(int valor);
int main(void)
{
   printf("%d", determinarSigno(4));
   return(0);
}

int determinarSigno(int valor)
{
 int resultado;

 if(valor>0)
 {
    resultado=1;
 }else
 if(valor<0)
 {
    resultado=-1;
 }
 else
 {
    resultado=0;
 }

 return resultado;
}

char determinarSigno(int valor);
int main(void)
{
   printf("%c", determinarSigno(4));
   return(0);
}

char determinarSigno(int valor)
{
 char resultado;

 if(valor>0)
 {
    resultado='p';
 }else
 if(valor<0)
 {
    resultado='o';
 }
 else
 {
    resultado='i';
 }

 return resultado;
}
