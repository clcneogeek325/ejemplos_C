#include <stdio.h>

main()
{
	int i, j;
	int suma = 0;
	
	int longitud;

	printf("Ingresa cuanto numero quieres sumar :\n");
	scanf("%i", & longitud);

	int arreglo[longitud];

	for(i = 0 ;i< longitud;i++)
	{
		printf("Ingresa un numero :\n");
		scanf("%i", & arreglo[i]);
	}
	

	for(j=0;j<longitud;j++)
	{
		suma += arreglo[j];
	}


	printf("La suma de todos los numero es : %i",suma);







}
