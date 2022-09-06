/*
 ============================================================================
 Name        : ejemplodefflush.c
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
setbuf(stdout, NULL);
char operador;
int numeroUno;
int numeroDos;
int resultado;

printf("Ingrese numero: ");
scanf("%d", &numeroUno);
fflush(stdin);
printf("Ingrese operador +/−: ");
scanf("%c", &operador);
printf("Ingrese numero: ");
scanf("%d", &numeroDos);

switch(operador){
    case '+':
    resultado = numeroUno + numeroDos;
    break;
    case '-':
    resultado = numeroUno - numeroDos;
    break;
}
printf("Resultado= %d", resultado);

return 0;
}
