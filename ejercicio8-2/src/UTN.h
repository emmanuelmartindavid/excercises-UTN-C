#ifndef UTN_H_
#define UTN_H_

int getString(char *string, int len);
int isAlfaNumeric(char *string, int len);
int getAlfaNumeric(char *pResult, int len);
int utn_getAlfaNumeric(char *pResult, char *message, char *ErrorMessage,
		int retry);

int getInt(int *pResult);
int isNumeric(char *string);
int utn_getNumber(int *pResult, char *message, char *errorMessage, int minimus,
		int maximus, int retry);

int getFloat(float *pResult);
int isFloat(char *string);
int utn_getNumberFloat(float *pResult, char *message, char *errorMessage,
		float minimus, float maximus, int retry);

int getName(char *pResult, int len);
int isName(char *string, int len);
int utn_getName(char *pResult, char *message, char *ErrorMessage, int retry);

#endif /* UTN_H_ */
