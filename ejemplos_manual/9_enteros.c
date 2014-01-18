#include <stdio.h>

int i;
int j;

main()
{
    printf("Ejemplo de Un ciclo FOR en C \n\n");
    int lista[10];

    for(i=0;i<10;i++)
    {
        printf("Ingresa un numero : ");
        scanf("%i",& lista[i]);

    }

    printf("\n\n\n");

    for(j=0;j<10;j++)
    {
        printf(" El elemento %i esta en posicion %i \n",  lista[j], j);
    }
}
