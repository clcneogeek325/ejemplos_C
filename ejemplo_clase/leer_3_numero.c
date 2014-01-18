#include <stdio.h>

main()
{
	int i, j;
	int arreglo[3];
	int suma = 0;

	for(i = 0 ;i< 3;i++)
	{
		printf("Ingresa un numero :\n");
		scanf("%i", & arreglo[i]);
	}
	

	for(j=0;j<3;j++)
	{
		suma += arreglo[j];
	}

	if(arreglo[1] && arreglo[2]<arreglo[0])
	{
		printf(" %i es el mayor de los 3 ",  arreglo[0]);
	}

	if(arreglo[0] && arreglo[2]<arreglo[1])
	{
		printf(" %i es el mayor de los 3 ",  arreglo[1]);
	}

	if(arreglo[0] && arreglo[1]<arreglo[2])
	{
		printf(" %i es el mayor de los 3 ",  arreglo[2]);
	}

	printf("La suma de todos los numero es : %i",suma);







}
