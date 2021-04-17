/*
 ============================================================================
 Name        : TP1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include "funciones.h"
#include "cuentas.h"


int main(void) {
	setbuf (stdout,NULL);

	int opcion;
	float numeroUno;
	int flagUno;
	flagUno=1;
	float numeroDos;
	int flagDos;
	flagDos=1;
	float suma;
	float resta;
	float multiplicacion;
	float division;
	int factorUno;
	int factorDos;
	int flagCalculo;
	flagCalculo=2; //2=No calculo. 1=Calculo. 0=Mostro.

	printf ("*****BIENVENID@*****\n");
	while (opcion!=5) {
	    //inicializar menu de opciones
	    opcion= opciones (numeroUno,numeroDos,suma,resta,multiplicacion,division,factorUno,factorDos,flagCalculo);

		switch (opcion) {
			case 1:
				numeroUno=num1();
				flagUno=0;
			break;
			
			case 2:
				numeroDos=num2();
				flagDos=0;
			break;
			
			case 3:
			    if (flagUno==1 || flagDos==1) {
		            printf ("\nERROR. Uno o mas numeros no fueron ingresados. Por favor ingrese el numero faltante\n");
	            }
	            else {
                    printf ("\nCalculando...\n");
                    suma=sumar(numeroUno,numeroDos); //suma numeros
                    resta=restar(numeroUno,numeroDos); //resta numeros
                    multiplicacion=multiplicar(numeroUno,numeroDos); //multiplica numeros
                    division=dividir(numeroUno,numeroDos); //divide numeros
                    factorUno=factorizar1 (numeroUno); //factoriza numero uno
                    factorDos=factorizar2 (numeroDos); //factoriza numeroDos
                    
                    flagCalculo=1;
	            }
			break;
			
			case 4:
			    if (flagCalculo==2) {
			        printf("\nERROR. No realizo el calculo. Recuerde utilizar la opcion 3\n");
			    }
			    flagCalculo=0;
			break;
		}
	}

	printf("\n¡Gracias por utilizar esta calculadora!\n");
	return EXIT_SUCCESS;
}
