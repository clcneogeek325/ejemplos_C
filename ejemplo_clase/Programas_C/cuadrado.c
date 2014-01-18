#include <stdio.h>

main()
{
	int n=0;
	int contador=0;
	printf("Ingresa el tamanio del cuadrado que quieres imprimir\n");
	scanf("%i",& n);
	int i;
	printf("\n");

	for(i=0;i<n;i++)
	{
		printf("* ");
	}
		printf("\n");

	i = 0;
	for(i=0;i<n-2;i++)
	{
		printf("*");
		while(contador < n-2)
		{
			printf("  ");
			contador++;
		}
		contador = 0;
		printf(" ");
		printf("*\n");
	}
	for(i=0;i<n;i++)
	{
		printf("* ");
	}
		printf("\n");
	
}
