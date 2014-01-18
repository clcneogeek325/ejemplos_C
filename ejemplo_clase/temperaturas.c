#include <stdio.h>

main()
{
    int farhr, celcius;
    int valorminimo, valormaximo, incremento;

    valorminimo = 0;
    valormaximo = 300;
    incremento = 20;

    farhr = valorminimo;

    while(farhr <= valormaximo)
    {
        celcius = 5 * (farhr - 32) / 9;
        printf("%d \t %d \n", farhr, celcius);
        farhr = farhr + incremento;
    }
}
