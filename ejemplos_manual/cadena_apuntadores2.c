#include <stdio.h>

main()
{
    int i;
    int j;
    char *nomb[] = {"mario", "alberto", "bonifacio", "nicandro"};
    char *nomb2[5];
    printf("%s\n",nomb[0]);
    printf("%s\n",nomb[1]);
    printf("%s\n",nomb[2]);
    printf("%s\n",nomb[3]);

    for( i=0;i<5;i++)
    {
	printf("Ingresa un nombre \n");
	scanf("%s\n",& *nomb2[i]);
    }

    for(j=0;j<5;j++)
    {
	    printf("%c\n",*nomb2[j]);
    }
}
