#include <stdio.h>


int sumar(int numero1, int numero2){
    int resultado;
    resultado = numero1 + numero2;
    return(resultado);
}


main()
{
    int N1 = 4;
    int N2 = 9;
    
    int res;
    res = sumar(N1,N2);
    printf("El resultado es :%i \n", res);
    return (0);
}
