#include <stdio.h>

main()
{
	int i, j;
	int arreglo[10];
	int suma = 0;

	for(i = 0 ;i< 10;i++)
	{
		printf("Ingresa un numero :\n");
		scanf("%i", & arreglo[i]);
	}
	

	for(j=0;j<10;j++)
	{
		suma += arreglo[j];
	}




	printf("La suma de todos los numero es : %i",suma);







}
