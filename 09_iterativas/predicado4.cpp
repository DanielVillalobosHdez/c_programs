
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#define MAX 3; 

int main(){
   
  int numero;
  int oportunidades = MAX;

  do {
      __fpurge(stdin);
      printf("Escribe un numero del 1 al 3: ");
      scanf(" %i", &numero);
      oportunidades--;
  } while ((numero<1 || numero>3) && oportunidades);

  return EXIT_SUCCESS;
}
