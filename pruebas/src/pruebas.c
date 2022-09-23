/*
 ============================================================================
 Name        : pruebas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 1000

int getString(char *string, int len);
int isAlfaNumeric(char *string, int len);
int getAlfaNumeric(char *pResult, int len);
int utn_getAlfaNumeric(char *pResult, char *message, char *ErrorMessage,
		int retry);

int main() {
	setbuf(stdout, NULL);
	char alfaNumerico[LEN];

	if (utn_getAlfaNumeric(alfaNumerico, "Ingrese alfanumero", "incorrecto", 4)
			== 0) {

		printf(" ALFANUMERO %s ", alfaNumerico);

	}

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

int isAlfaNumeric(char *string, int len) {
	int i = 0;
	int ret = 0;
	if (string != NULL && strlen(string) > 0) {
		while (string[i] != '\0') {
			if ((string[i] < '0' || string[i] > '9')
					&& (string[i] < 'a' || string[i] > 'z')
					&& (string[i] < 'A' || string[i] > 'Z') && string[i] != ' '
					&& string[i] != '.') {
				ret = -1;
				break;
			}
			i++;
		}
	}
	return ret;
}

int getAlfaNumeric(char *pResult, int len) {
	int ret = -1;
	char option[LEN];
	if (pResult != NULL) {
		if (getString(option, sizeof(option)) == 0
				&& isAlfaNumeric(option, sizeof(option)) == 0) {
			if (strnlen(option, sizeof(option)) <= len) {
				strncpy(pResult, option, len);

				ret = 0;

			}

		}

	}
	return ret;
}

int utn_getAlfaNumeric(char *pResult, char *message, char *ErrorMessage,
		int retry) {
	int ret;
	char bufferString[LEN];
	while (retry > 0) {
		printf(message);
		if (getAlfaNumeric(bufferString, sizeof(bufferString))
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

int getName(char *pResult, int len) {
	int ret = -1;
	char option[LEN];
	if (pResult != NULL) {
		if (getString(option, sizeof(option)) == 0
				&& isName(option, sizeof(option)) == 0) {
			if (strnlen(option, sizeof(option)) <= len) {
				strncpy(pResult, option, len);

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
