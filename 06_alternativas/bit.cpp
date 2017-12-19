
#include <stdio.h>
#include <stdlib.h>

int main(){
  int bit1;
  int bit2;

  printf("El bit 1 es igual a 0 o a 1: ");
  scanf(" %i", &bit1);
  printf("El bit 2 es igual a 0 o a 1: ");
  scanf(" %i", &bit2);

  if (bit1 == 1 && bit2 == 0)
      printf("El número es 1 \n");
    else if (bit1 == 0 && bit2 == 1)
      printf("El numero es 2 \n");
      else if (bit1 == 0 && bit2 == 0)
          printf("El número es 0 \n");
        else if (bit1 == 1 && bit2 == 1)
            printf("El numero es 3 \n");
          else
            printf("Te he dicho 0 o 1 gilipollas\n");



  return EXIT_SUCCESS;
}
