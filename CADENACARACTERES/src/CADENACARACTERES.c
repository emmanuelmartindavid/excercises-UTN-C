#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 10
int getText(char *pResult);
int isString(char *string);

int main(void) {
	setbuf(stdout, NULL);

	char name[LEN];

	//int retry = 5;
	//int returno;
	printf("Ingrese su nombre \n");

	getText(&name[LEN]);

	printf("Su nombre es %s \n", name);

	return EXIT_SUCCESS;
}

int getText(char *pResult) {
	char name[LEN];
	int ret = 0;
	if (isString(name[LEN]) && fgets(name, sizeof(name), stdin)) {

		*pResult = name[LEN];
		ret = 1;
	}
	return ret;
}

int isString(char *string) {
	int i = 0;
	int ret = 1;
	if (string != NULL && strlen(string)>0) {
		while (string[i] != '\0') {
			if (!(string[i] >= 65 && string[i] <= 90)
					&& !(string[i] >= 97 && string[i] <= 122)) {
				//(string[i] < 'a' || string[i] > 'z' || string[i] < 'A' || string[i] > 'Z') {
				ret = 0;
				break;
			}
			i++;
		}
	}
	return ret;
}

/*if (!(string[i] >= 65 && string[i] <= 90)
					&& !(string[i] >= 97 && string[i] <= 122))*/
