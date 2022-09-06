/*
 ============================================================================
 Name        : ejercicio2-4.c

Enter 5 characters and inform how many letters p (lowercase) were entered.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
setbuf(stdout, NULL);
char caracter;
int i=0;
int contadorp=0;

do{
i++;

printf("Ingrese 5 caracteres: \n");
scanf("%c", &caracter);
fflush(stdin);

if(caracter=='p' && caracter >= 'a' && caracter <= 'z')
{
	contadorp++;
}

}while(i<5);
if(i>0)
{
printf("Se ingresaron: %d 'p' minusculas", contadorp);
}
else
{
	printf("no se ingresaron p minusculas");
}
return 0;
}
