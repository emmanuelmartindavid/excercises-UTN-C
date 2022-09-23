/*
 * funciones.h
 *
 *  Created on: 7 sep. 2022
 *      Author: cuerpos
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

//int menu(int array[], float average);
//int menuprincipal(int age[]);
//void menuprincipal(int age[]);
void initializeArray(int array[], int len);
void Sequentialload(int array[], int len);
void showLoadNumbers(int array[], int len);
void showJustOneNumber(int number);
int averageNumbers(int array[], float* average, int len);
int showMenu();

//void AleatoryLoad(int age[]);
//void orderBubbleNumber(int number[]);
//void OrderInsertionNumber(int data[], int len, int number[]);

#endif /* FUNCIONES_H_ */
