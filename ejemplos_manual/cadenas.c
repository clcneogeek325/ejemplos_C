#include <stdio.h>

comparar(char char1[], char char2[])
{
    int ResComparacion = strcmp(char1, char2);
    char Resultado [50];
   if(ResComparacion == 0)
    {
        printf("Son Iguales");
    }else{
        printf("Son diferentes");
    }

   
}

main()
{
    char cadena1[]="nombre";
    char cadena2[]="apellido";
    char cadena3[]="apellido";

    comparar(cadena1,cadena2);
    comparar(cadena3,cadena2);
    comparar(cadena1,cadena3);




}
