/*
 * funcionesC-F.c
 *
 *  Created on: 1 sep. 2022
 *      Author: cuerpos
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>


int transFC(int Far){
	int fc;
fc = (Far - 32) * 0.56;
return fc;
}

int transCF(int Celcius){
	int cf;
cf = (Celcius * 1.8) + 32;
return cf;
}

