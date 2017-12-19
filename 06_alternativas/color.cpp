
#include <stdio.h>
#include <stdlib.h>

int main(){
  int rojo;
  int azul;
  int amarillo;

  printf("Ves rojo(0 = no o 1 = si): ");
  scanf(" %i", &rojo);
  printf("Ves azul(0 = no o 1 = si): ");
  scanf(" %i", &azul);
  printf("Ves amarillo (0 = no o 1 = si): ");
  scanf(" %i", &amarillo);

  if (rojo == 0 && azul == 0 && amarillo == 0)
      printf("ves blanco\n");
    else if (rojo == 1 && azul == 0 && amarillo == 0)
      printf("ves rojo \n");
      else if (rojo == 0 && azul == 1 && amarillo == 0)
          printf("ves azul \n");
        else if (rojo == 0 && azul == 0 && amarillo == 1)
            printf("ves amarillo \n");
          else if (rojo == 1 && azul == 1 && amarillo == 0)
            printf("ves morado\n");
            else if (rojo == 1 && azul == 0 && amarillo == 1)
              printf("ves naranja\n");
              else if (rojo == 0 && azul == 1 && amarillo == 1)
                printf("ves verde \n");
                else if (rojo == 1 && azul == 1 && amarillo == 1)
                  printf("ves negro \n");
                  else
                    printf("Has metido valores distintos de 0 o 1, mete los valores correctos \n");




  return EXIT_SUCCESS;
}
