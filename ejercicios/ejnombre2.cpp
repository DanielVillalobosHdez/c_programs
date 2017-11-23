
#include <stdio.h>
#include <stdlib.h>

int main(){
  char nombre [256];
  char apellido [256];
  char apellido2 [256];

  printf("Nombre: ");
  scanf("%s", nombre);
  printf("Primer apellido: ");
  scanf("%s", apellido);
  printf("Segundo apellido: ");
  scanf("%s", apellido2);

  printf("Hola %s %s %s\n", nombre, apellido, apellido2);

  return EXIT_SUCCESS;
}
