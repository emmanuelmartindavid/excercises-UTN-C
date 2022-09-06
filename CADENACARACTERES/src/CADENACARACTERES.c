/*
 ============================================================================
 Name        : CADENACARACTERES.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main(void) {
	setbuf(stdout, NULL);
	char texto[20];
	printf("\nIngrese nombre: ");
	scanf("%s", texto);
	printf("\nNombre: %s ", texto);

}
/* GETS (GET String)
La función gets permite leer desde el teclado cadenas de caracteres.
gets (vec);
El argumento es la dirección de comienzo del vector donde se va a guardar la palabra.
La función lee los caracteres que se ingresan por teclado hasta que se presiona un enter. Lo
que se leyó lo guarda a partir de la dirección indicada por vec y coloca el terminador nulo en
lugar del enter.
Ejemplo: Cargar 1 nombre y mostrarlo por pantalla
*/
void main(void)
{
char texto[20];
printf("\nIngrese nombre: ");
gets(texto);
printf("\nNombre: %s ",texto);
}
/*
  STRCMP (STRing CoMParison)
La función strcmp sirve para comparar cadenas de caracteres.
int strcmp ( cad1 , cad2 )
• 1er argumento: Dirección de comienzo del vector donde esta la otra palabra a comparar
• 2do argumento: Dirección de comienzo del vector donde esta una de las palabras a
comparar
Como resultado de la comparación la función devuelve un valor entero que se interpreta de la
siguiente manera
• Si devuelve menor a cero significa que la palabra en cad1 es menor que que la palabra
en cad2
• Si devuelve cero significa que que la palabra en cad1 es la misma que que la palabra en
cad2
• Si devuelve mayor a cero significa que la palabra en cad1 es mayor que que la palabra
en cad2
 */
void main(void)
{
char texto[20];
printf("\nIngrese el password: ");
gets(texto);
 if(strcmp(texto,"1234")==0)
 printf("Password correcto");
 else
 printf("Password incorrecto");
}

/*1.2.4 STRCPY (STRing CoPY)
La función strcpy sirve para copiar una cadena de caracteres desde un lugar a otro , es decir
desde un origen a un destino.
strcpy ( destino , origen )
• 1er argumento: Dirección de comienzo del vector donde se van a guardar los datos
• 2do argumento: Dirección de comienzo del vector que tiene los datos a copiar
La función copia la cadena de caracteres que se encuentra guardada en un vector (cuya
dirección de comienzo es origen ) hacia otro vector (cuya dirección de comienzo es destino).
Ejemplo: Cargar una palabra en una cadena, copiarla a otra cadena auxiliar, e imprimir ambas.
*/
void main(void)
{
char texto1[20];
char texto2[20];
printf("\nIngrese una palabra: ");
gets(texto1);
 strcpy(texto2,texto1);
 printf("Se ingreso:%s la copia es:%s",texto1,texto2);
}
/*
1.2.5 STRLEN (STRing LENght)
La función strlen sirve para obtener la cantidad de letras que tiene una cadena de caracteres.
Esta función cuenta los caracteres hasta que llega al 0(terminador de cadena), es decir , si
ingresamos la siguiente cadena “Hola como estas” , la función devolvera 15 que es la cantidad
de caracteres que tiene la cadena (los espacios tambien son contados).
int strlen (vec)
El argumento de la función es la dirección de comienzo del vector que tiene los datos.
Ejemplo: Cargar un vector con una palabra y mostrar la cantidad de caracteres que tiene.
*/
#define MAX 10
void main(void)
{
char vec[MAX];
int i,x;
printf("\ningrese nombre: ");
gets(vec);
x=strlen (vec);
printf("\nla cantidad de letras es %d: ",x);
}
