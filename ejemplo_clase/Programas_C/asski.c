/*
Fecha: 02/05/07.
Programador: Luis C.
Archivo: ascii.c
Funcion: Imprimir el codigo ascci en pantalla.
33 a la 126
*/

#include<stdio.h>

int main(void)
{
	int i;
	for(i=33;i<127;i++)
	{
		printf("%c\n",i);
	}
}

