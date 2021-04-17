/*
 * funciones.c
 *
 *  Created on: 11 abr. 2021
 *      Author: aalva
 */

#include "funciones.h"

int opciones (int numeroUno, int numeroDos, float suma, float resta, float multiplicacion, float division, int factorUno, int factorDos,int flagCalculo) { //menu de opciones
	int seleccion;

	//INGRESO DE NUMEROS
	printf ("\nIngrese la opcion deseada."
			"\n1.Ingresar el primer numero (A=%d)"
			"\n2.Ingresar el segundo numero (A=%d)"
			,numeroUno,numeroDos);

	//CALCULAR OPERACIONES
	printf ("\n3.Calcular las operaciones"
			"\n		a) Calcular la suma (A+B)"
			"\n		b) Calcular la resta (A-B)"
			"\n		c) Calcular la multiplicacion (A*B)"
			"\n		d) Calcular la division (A/B)"
			"\n		e) Calcular el factorial del primer numero (A!)"
			"\n		e) Calcular el factorial del segundo numero (B!)");

	//MOSTRAR RESULTADOS
	if (flagCalculo==2) {
		printf ("\n4.Mostrar los resultados"
			"\n		a) El resultado de A+B es: -Sin calcular-"
			"\n		b) El resultado de A-B es: -Sin calcular-"
			"\n		c) El resultado de A*B es: -Sin calcular-"
			"\n		d) El resultado de A/B es: -Sin calcular-"
			"\n		e) El resultado de A! es: -Sin calcular-"
			"\n		e) El resultado de B! es: -Sin calcular-");
	}
	else if (flagCalculo==1) {
		printf ("\n4.Mostrar los resultados"
			"\n		a) El resultado de A+B es: -Calculado-"
			"\n		b) El resultado de A-B es: -Calculado-"
			"\n		c) El resultado de A*B es: -Calculado-"
			"\n		d) El resultado de A/B es: -Calculado-"
			"\n		e) El resultado de A! es: -Calculado-"
			"\n		e) El resultado de B! es: -Calculado-");
	}
	else if (flagCalculo==0) {
		printf("\n4.Mostrar los resultados");
		printf("\n		a) El resultado de A+B es: %f",suma);
		printf("\n		b) El resultado de A-B es: %f",resta);
		printf("\n		c) El resultado de A*B es: %f",multiplicacion);

		if (numeroDos==0) {
			printf("\n		d) No es posible dividir un numero por cero");
		} else {
			printf("\n		d) El resultado de la division es: %f",division);
		}

		if (numeroUno<0) {
			printf ("\n 		e) No es posible factorizar un numero negativo");
		} else {
			printf("\n		e) El resultado de A! es: %d",factorUno);
		}

		if (numeroDos<0) {
			printf ("\n 		e) No es posible factorizar un numero negativo");
		} else {
			printf("\n		e) El resultado de B! es: %d",factorDos);
		}
	}

	printf ("\n5.Finalizar.");
	printf ("\nSeleccione la opcion: ");
	scanf ("%d", &seleccion);

	while (seleccion<1 || seleccion>5) {
	    printf ("ERROR. Ingrese una opcion valida: ");
	    scanf ("%d",&seleccion);
	}

	return seleccion;
}

float num1 (void) { //primer numero
	float num1;
	printf ("\nIngrese el primer numero: ");
	scanf ("%f", &num1);

	printf ("Numero ingresado correctamente\n");
	return num1;
}
float num2 (void) { //segundo numero
	float num2;
	printf ("\nIngrese el segundo numero: ");
	scanf ("%f", &num2);

	printf ("Numero ingresado correctamente\n");
	return num2;
}

void muestraCuentas (float suma,float resta,float multiplicacion,float division,int factorUno,int factorDos) {
    printf ("\nLa suma de los numeros es %f \nLa resta de los numeros es %f \nLa multiplicacion de los numeros es %f \nLa division de los numeros es %f \nEl factor del primer numero es %d \nEl factor del segundo numero es %d\n",suma,resta,multiplicacion,division,factorUno,factorDos);
}
