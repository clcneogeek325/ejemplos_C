#include <stdio.h>

int array[]= { 1, 2, 3, 4, 5, 6 , 7, 8, 9, 10};

void main() {

	 
	  int longitud, valor;
	  int i=1;

	  while(valor != 0)
	  {       
		  valor = array[i];
		  longitud = i;
		  i++;
	  }

	  i = i - 1;

	  printf("La longitud del arreglo es : %i\n",i);
	  
}
