#include <stdio.h>

main()
{
	int i, j, num;

	printf("Inresa un numero : \n");
	scanf("%i", & num);
 	
	printf("\n");
	int columna1=0;
	int columna2=0;
	int columna3=0;


	for(i=1;i<=num;i++)
	{
			columna1 = i*1;
			columna2 = i*2;
                        columna3 = i*3;
			if(columna1 <= num)
			{
				printf("%i\t", columna1);
			}
			if(columna2 <= num)
			{
				printf("%i\t",columna2);
			}
			if(columna3 <= num)
			{
				printf("%i",columna3);
			}
			printf("\n");
	}
}
