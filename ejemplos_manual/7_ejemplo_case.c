#include <stdio.h>

main()
{
    int opc = 1;

    switch (opc)
    {
        case 1:
            printf("El numero es igual a 1.\n");
            break;

        case 2:
            printf("El numero es igual a 2.\n");
            break;

        case 3:
            printf("El numero es igual a 3.\n");
            break;

        case 4:
            printf("El numero es igual a 4.\n");
            break;

        default:
            printf(" No es nungun numero del uno al 4");
            break;
    }
}
