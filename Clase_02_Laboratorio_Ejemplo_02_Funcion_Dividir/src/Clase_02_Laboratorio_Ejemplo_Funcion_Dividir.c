/*
 ============================================================================
 Name        : Clase_02_Laboratorio_Ejemplo_Funcion_Dividir.c
 Author      : Alejandro Alberto Martín Rozas
 Version     :
 Copyright   : 24/03/2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float dividir(float dividento, float divisor);

int main(void)
{
	int num1 = 0;
	int num2 = 0;
	float resultado;

	resultado = dividir(num1,num2);

	printf("la división es: %2.f", resultado);

	return EXIT_SUCCESS;
}

float dividir(float dividento, float divisor)
{
	float rtn;
	//rtn=0 puedo declarar el rtn valor 0 y ahorrarme el rtn, pero no puedo
	//imprimir error.
	if(divisor != 0)
	{
		rtn=dividento/divisor;
	}
	else
	{
		puts("ERROR, NO SE PUEDE DIVIDIR POR 0");
		printf("ERROR, NO SE PUEDE DIVIDIR POR 0");
		rtn=0;
	}

		return rtn;
}
//Las funciones tiene que validar por dentro para no romper.
