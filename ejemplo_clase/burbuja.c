#include <stdio.h>


main()
{
	int arrgeglo[2];
        int i, j, rrecorrido, posicion, temp, x;

	for(i=0;i<=2;i++)
	{
		printf("Ingresa un numero: \n");
		scanf("%i",& arrgeglo[i]);
	}

	for(j=0;j<=2;j++)
	{
		printf("Los numero singresado fueron :");
		printf("%i\n",arrgeglo[j]);
	}

	for(rrecorrido=0;rrecorrido<arrgeglo.length;rrecorrido++)
	{
		for(posicion=arrgeglo[].length - rrecorrido;posicion>posicion + 1;temp = arrgeglo[posicion])
		{
			arrgeglo[posicion]=arrgeglo[posicion + 1];
			arrgeglo[posicion + 1] = temp;
		}
	}

	for(x=0;x<arrgeglo[].length;x++)
	{
		printf("%i\n",arrgeglo[x]);
	}



}
