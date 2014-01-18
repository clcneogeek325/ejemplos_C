#include <stdio.h>

char nombre[80];
int calificacion;
char *nombres();
int *calificaciones();

main()
{
    printf("Ingresa tu nombre \n");
    scanf("%c",  nombre);
    *nombres[0] = nombre;

    printf("Ingresa tu calificacion:\n");
    scanf("%i", calificacion);
    *calificaciones[0] = califiacion;

    printf("Ingresa tu nombre \n");
    scanf("%s",& nombre);
    *nombres[1] = nombre;
    

    printf("Ingresa tu calificacion:\n");
    scanf("%i",& calificacion);
    *calificaciones[1] = califiacion;

    printf(" Tu nombre es:%s\n", nombres[1]);
    printf("Tu califiacion es: %i", calificaciones[1]);

    printf(" Tu nombre es:%s\n", nombres[0]);
    printf("Ru califiacion es: %i", calificaciones[0]);

}
