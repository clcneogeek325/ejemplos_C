#include <stdio.h>


int sumar(int num1, int num2)
{
    int resultado = num1 + num2;
    return (resultado);
}

int restar(int num1, int num2)
{
    int resultado = num1 - num2;
    return (resultado);
}

int dividir(int num1, int num2)
{
    int resultado = num1 / num2;
    return (resultado);
}

int multiplicar(int num1, int num2)
{
    int resultado = num1 * num2;
    return (resultado);
}


main()
{
    int opc = 0;
    int N1;
    int N2;
    int RES;
    while(opc != 5)
    {

        printf("\n\n\n1. Hacer una suma              |||   |||  |||||  |||||| |||||| ||||| ||  ||         >             \n");
        printf("2. Hacer una resta             ||||  |||     ||  ||  || ||        |  || ||          >              \n");
        printf("3. Hacer una multiplicacion    ||| | |||  |||    ||  || || ||| |||   ||||           >               \n");
        printf("4. Hacer una division          |||  ||||     ||  ||  || ||  ||    || || ||          >    \n");
        printf("5. salir                       |||   |||  |||||  |||||| |||||| ||||| ||  ||         >   \n\n\n");

        printf("   Teclear una opcion:  ");
        scanf("%d", &opc);
        switch(opc)
        {
            case 1:
                printf("\n\n\nHas escojido la opcion de suma\n");
                printf("Ingresa el primer numero:");
                scanf("%i", &N1);
                printf("Ingresa el primer segundo:");
                scanf("%i", &N2);
                RES = sumar(N1,N2);
                printf("\n\n\nEl resultado de la suma es: %i \n\n\n\n\n\n\n\n\n\n\n\n\n", RES);
                printf("\n<----------------------------------------------------------------------------------->");
                break;
            case 2:
                printf("\n\n\nHas escojido la opcion de Resta\n");
                printf("Ingresa el primer numero:");
                scanf("%i", &N1);
                printf("Ingresa el primer segundo:");
                scanf("%i", &N2);
                RES = restar(N1,N2);
                printf("\n\n\nEl resultado de la Resta es: %i ", RES);
                printf("\n<----------------------------------------------------------------------------------->");
                break;
            case 3:
                printf("\n\n\nHas escojido la opcionde Division\n");
                printf("Ingresa el primer numero:");
                scanf("%i", &N1);
                printf("Ingresa el primer segundo:");
                scanf("%i", &N2);
                RES = dividir(N1,N2);
                printf("\n\n\nEl resultado de la Division es: %i ", RES);
                printf("\n<----------------------------------------------------------------------------------->");
                break;
            case 4:
                printf("\n\n\nHas escojido la opcionde Multiplicacion\n");
                printf("Ingresa el primer numero:");
                scanf("%i", &N1);
                printf("Ingresa el primer segundo:");
                scanf("%i", &N2);
                RES = multiplicar(N1,N2);
                printf("\n\n\nEl resultado de la Multiplicacion es: %i ", RES);
                printf("\n<----------------------------------------------------------------------------------->");
                break;

            case 5:
                printf("\n\n\nSe ha elegido salir del programa \n");
                break;
            default:
                printf("\tOpcion no disponible\n\n");
                break;
        } 
    } 
}

