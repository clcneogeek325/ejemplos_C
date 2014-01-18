#include <stdio.h>

char *nombres[5];
int calificacion[5];

int contador = 0;
main()
{

while(contador<5)
{
    printf("Ingresa tu nombre: ");
    scanf("%s \n", nombres[contador]);
    printf("%i",contador);
    contador++;

}


}


