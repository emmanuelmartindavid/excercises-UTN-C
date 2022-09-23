#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 1000

int getInt(int *pResult);
int myGets(char *string, int len);
int isNumeric(char *string);

int getInt(int *pResult) {
	int ret = 0;
	char option[LEN];
	if (pResult != NULL) {
		if (myGets(option, sizeof(option)) == 0 && isNumeric(option)) {
			*pResult = atoi(option);
			ret = 1;
		}

	}
	return ret;
}

int isNumeric(char *string) {
	int i = 0;
	int ret = 1;
	if (string != NULL && strlen(string) > 0) {
		while (string[i] != '\0') {
			if (string[i] < '0' || string[i] > '9') {
				ret = 0;
				break;
			}
			i++;
		}
	}
	return ret;
}

int myGets(char *string, int len) {
	if (string != NULL && len > 0 && fgets(string, len, stdin) == string) {
		fflush(stdin);
		if (string[strlen(string) - 1] == '\n') {
			string[strlen(string) - 1] = '\0';
		}
		return 0;
	}
	return -1;
}

int utn_getNumber(int *pResult, char *message, char *ErrorMessage, int minimus,
		int maximus, int retry) {
	int ret;
	int num = 0;
	while (retry > 0) {
		printf(message);
		if (getInt(&num) == 1) {
			if (num <= maximus && num >= minimus)
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
		*pResult = num;
	}
	return ret;
}


