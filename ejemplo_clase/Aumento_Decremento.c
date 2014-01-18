#include <stdio.h>

int Acendente_y_Decendente()
{
    printf("Forma acendente \n");
    int x;
    for (x=0;x<10;x++)
    {
        printf("Numero %i \n", x);
    }

    printf("\n\n");
    printf("Forma decndente");
    printf("\n\n");

    int y;
    for (y=10;y>0;y--)
    {
        printf("Numero %i \n", y);
    }
    return 0;
}

main()
{

    Acendente_y_Decendente();
}
