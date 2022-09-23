#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "UTN.h"
#define LEN 1000


/// FUNCION PIDE DATO POR CADENA
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

///FUNCIONES PARA VALIDAR DESCRIPCION ALFANUMERICA

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


/// FUNCIONES PARA VALIDAR NUMERO ENTERO

int getInt(int *pResult) {
	int ret = -1;
	char option[LEN];
	if (pResult != NULL) {
		if (getString(option, sizeof(option)) == 0 && isNumeric(option) == 0) {
			*pResult = atoi(option);
			ret = 0;
		}

	}
	return ret;
}

int isNumeric(char *string) {
	int i = 0;
	int ret = 0;
	if (string != NULL && strlen(string) > 0) {
		while (string[i] != '\0') {
			if (string[i] < '0' || string[i] > '9') {
				ret = -1;
				break;
			}
			i++;
		}
	}
	return ret;
}

int utn_getNumber(int *pResult, char *message, char *errorMessage, int minimus,
		int maximus, int retry) {
	int ret;
	int num = 0;
	if (pResult != NULL && message != NULL && errorMessage != NULL) {
		while (retry > 0) {
			printf(message);
			if (getInt(&num) == 0) {
				if (num <= maximus && num >= minimus)
					break;
			}
			fflush(stdin);
			retry--;
			printf(errorMessage);
		}
		if (retry == 0) {
			ret = -1;
		} else {
			ret = 0;
			*pResult = num;
		}
	}
	return ret;

}


/// FUNCIONES PARA VALIDAR NUMERO FLOTANTE

int getFloat(float *pResult) {
	int ret = -1;
	char option[LEN];
	if (pResult != NULL) {
		if (getString(option, sizeof(option)) == 0 && isFloat(option) == 0) {
			*pResult = atof(option);
			ret = 0;
		}
	}
	return ret;
}

int isFloat(char *string) {
	int i = 0;
	int ret = 0;
	int pointCounter = 0;

	if (string != NULL && strlen(string) > 0) {
		for (i = 0; string[i] != '\0'; i++) {

			if (i == 0 && (string[i] == '-' || string[i] == '+')) {
				continue;
			}
			if (string[i] < '0' || string[i] > '9') {
				if (string[i] == '.' && pointCounter == 0) {
					pointCounter++;
				} else {
					ret = -1;
					break;
				}
			}
		}
	}
	return ret;
}

int utn_getNumberFloat(float *pResult, char *message, char *errorMessage,
		float minimus, float maximus, int retry) {
	int ret;
	float num = 0;
	if (pResult != NULL && message != NULL && errorMessage != NULL) {
		while (retry > 0) {
			printf(message);
			if (getFloat(&num) == 0) {
				if (num <= maximus && num >= minimus)
					break;
			}
			fflush(stdin);
			retry--;
			printf(errorMessage);
		}
		if (retry == 0) {
			ret = -1;
		} else {
			ret = 0;
			*pResult = num;
		}
	}
	return ret;
}


/// FUNCIONES PARA VALIDAR NOMBRE, O CUALQUIER CADENA DE TEXTO ENTRE A Y Z a y z
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
