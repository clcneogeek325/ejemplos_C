#include <stdio.h>

char cadena[40];
int calificacion=100;

imprimir(char calificacion)
{
    printf("El nombre es %c \n", calificacion);

}

main()
{
printf("ingrese su nombre \n");

scanf("%c", cadena);


imprimir(cadena);

}
