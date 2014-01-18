#include <stdio.h>

main()
{
	printf("***************PROCESOS************\n");
	printf("Soy el procesos Padre y Acontinuacion Voy a genrar un procesoHijo\n");

	int procesoHijo=fork();

	if(procesoHijo)
	{
		printf("\n  Infroamnd Sobre o procesos creados............\n");
		printf("Padre PDI: %i\n", getpid());
		printf("Hijo PID: %i \n", procesoHijo);

	}
}
