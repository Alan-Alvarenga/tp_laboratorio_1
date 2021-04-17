/*
 * cuentas.c
 *
 *  Created on: 16 abr. 2021
 *      Author: aalva
 */

#include "cuentas.h"


float sumar(float num1,float num2) {
	float sumar;
	sumar=num1 + num2;

	return sumar;
}

float restar(float num1,float num2) {
    float restar;
	restar=num1 - num2;

	return restar;
}
float multiplicar(float num1,float num2) {
    float multiplicar;
	multiplicar=num1 * num2;

	return multiplicar;
}
float dividir(float num1,float num2) {
    float dividir;

	dividir=num1 / num2;

	return dividir;
}
int factorizar1 (float num1) {
    int factorial=1;
    float resultado=1;

    while (factorial<num1) {
        resultado=resultado * (num1*factorial);
        num1--;
    }

    return resultado;
}
int factorizar2 (float num2) {
    int factorial=1;
    int resultado=1;

    while (factorial<num2) {
        resultado=resultado * (num2*factorial);
        num2--;
    }

    return resultado;
}

