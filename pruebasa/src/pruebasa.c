#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 100000
/*Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
Cantidad de positivos y negativos.
Sumatoria de los pares.
El mayor de los impares.
Listado de los números ingresados.
Listado de los números pares.
Listado de los números de las posiciones impares.
Se deberán utilizar funciones y vectores.*/
int getString(char *string, int len);
int getName(char *pResult, int len) ;
int isName(char *string, int len) ;
int utn_getName(char *pResult, char *message, char *ErrorMessage, int retry);

int main()
{
	setbuf(stdout, NULL);
	char name[LEN];

	utn_getName(name, "ingrese", "NO",2);

	printf("%s", name);


return 0;
}

int getString(char *string, int len) {
	int retorno = -1;
	char bufferString[LEN];

	if (string != NULL && string > 0) {
		fflush(stdin);
		if (fgets(bufferString, sizeof(bufferString), stdin) != NULL) {
			if (bufferString[strnlen(bufferString, sizeof(bufferString)) - 1]
					== '\n') {
				bufferString[strnlen(bufferString, sizeof(bufferString)) - 1] =
						'\0';
			}
			if (strnlen(bufferString, sizeof(bufferString)) <= len) {
				strncpy(string, bufferString, len);
				retorno = 0;
			}
		}
	}
	return retorno;
}


int getName(char *pResult, int len) {
	int ret = -1;
	char buffer[LEN];
	if (pResult != NULL) {
		if (getString(buffer, sizeof(buffer)) == 0
				&& isName(buffer, sizeof(buffer)) == 0) {
			if (strnlen(buffer, sizeof(buffer)) <= len) {
				strncpy(pResult, buffer, len);

				ret = 0;

			}

		}

	}
	return ret;
}

int isName(char *string, int len) {
	int i = 0;
	int ret = 0;
	if (string != NULL && strlen(string) > 0) {
		while (string[i] != '\0') {
			if ((string[i] < 'a' || string[i] > 'z')
					&& (string[i] < 'A' || string[i] > 'Z')) {
				ret = -1;
				break;
			}
			i++;
		}
	}
	return ret;
}

int utn_getName(char *pResult, char *message, char *ErrorMessage, int retry) {
	int ret;
	char bufferString[LEN];
	while (retry > 0) {
		printf(message);
		if (getName(bufferString, sizeof(bufferString))
				== 0&& strnlen(bufferString,sizeof(bufferString))<LEN) {

			ret = 0;
			break;
		}
		fflush(stdin);
		retry--;
		printf(ErrorMessage);
	}
	if (retry == 0) {
		ret = -1;
	} else {
		ret = 0;
		strncpy(pResult, bufferString, LEN);
	}
	return ret;

}
