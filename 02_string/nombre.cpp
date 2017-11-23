
#include <stdio.h>
#include <stdlib.h>

int main(){
  char nombre[256];

  printf("Dime tu nombre: ");
  scanf(" %s", nombre); // lee una cadena de caracteres (%s string)
  printf("Hola, %s.\n", nombre);

  return EXIT_SUCCESS;
}
