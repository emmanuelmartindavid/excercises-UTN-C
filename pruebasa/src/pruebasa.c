#include <stdio.h>
#include <stdlib.h>
#define TAM 5
/*Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
Cantidad de positivos y negativos.
Sumatoria de los pares.
El mayor de los impares.
Listado de los números ingresados.
Listado de los números pares.
Listado de los números de las posiciones impares.
Se deberán utilizar funciones y vectores.*/

int cargarArray(int array[], int size, int minimo, int maximo);

int main()
{
	setbuf(stdout, NULL);
    int contadorNega;
    int contadorPosi;
    int acumuladorPar;
    int flagMayorImpar;
    int mayorImpar;

    acumuladorPar = 0;
    contadorNega = 0;
    contadorPosi = 0;
    flagMayorImpar = 0;

    int vectorNumerosEnteros[TAM];

    cargarArray(vectorNumerosEnteros, TAM, -1000, 1000);


    for(int i = 0; i<TAM; i++)
    {
        if(vectorNumerosEnteros[i] >=0)
        {
            contadorPosi++;
        }
        else
        {
            contadorNega++;
        }
    }

    for(int i = 0; i<TAM; i++)
    {
        if(vectorNumerosEnteros[i] %2 == 0)
        {
            acumuladorPar = acumuladorPar + vectorNumerosEnteros[i];

            printf("Num par: %d \n", vectorNumerosEnteros[i]);
        }
        else
        {


            if(flagMayorImpar == 0)
            {
                mayorImpar = vectorNumerosEnteros[i];
                flagMayorImpar = 1;
            }
            else
            {
                if(vectorNumerosEnteros[i] > mayorImpar)
                {
                    mayorImpar = vectorNumerosEnteros[i];
                }
            }
            printf("Num posicion impar: %d\n", i);
        }
    }

    for(int i = 0; i<TAM; i++)
    {
        printf("Num ingresado: %d\n", vectorNumerosEnteros[i]);
    }

    printf("positivos: %d negativos: %d\n", contadorPosi, contadorNega );

    printf("la suma de los pares: es %d\n ", acumuladorPar);

    printf("El mayor de los impares es: %d\n", mayorImpar );

    ;



}

int cargarArray(int array[], int size, int minimo, int maximo)
{
    int numeroIngresado;
    int retorno = -1;

    if(array != NULL && size > 0)
    {
        for(int i = 0; i<size; i++)
        {
            do
            {
                printf("ingrese un numero: ");
                scanf("%d", &numeroIngresado);
            }
            while(numeroIngresado < minimo || numeroIngresado > maximo);

            array[i] = numeroIngresado;
        }
        retorno = 0;

    }
    return retorno;

}



