#include <stdio.h>

int numero1;
int numero2;
int resultado;
main()
{
    printf("Ingressa un numero :");
    scanf("%i", &numero1);
    printf("Ingressa el segundo Numero :");
    scanf("%i", &numero2);
    resultado = numero1 + numero2;
    printf("El resultado es :%i \n", resultado);
    
}
