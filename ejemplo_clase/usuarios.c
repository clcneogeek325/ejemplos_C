#include <stdio.h>

char cadena[80];
int calificacion=100;

imprimir(char nombre[],int cal)
{
    printf("\n\n\n\n\nSu nombre de usuario es: %s \n", nombre);
    printf("Su calificacion es :%i \n", cal);

}

main()
{
printf("Ingrese su nombre :");

scanf("%s", cadena);


imprimir(cadena, calificacion);

}
