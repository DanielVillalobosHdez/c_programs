

#include <stdio.h>
#include <stdlib.h>

int main(){
  char nombre[16];
  char hexadecimal[16];
  int num;

  printf("Entero: ");
  scanf(" %i", &num);
  scanf(" %s,", nombre);
  printf("[%i] => %s.\n", num, nombre);

  printf("Hexadecimal: ");
  scanf(" %[0-9A-Fa-f]", hexadecimal);
  printf("0x%sh\n", hexadecimal);
  
  scanf(" %[^a-f]", hexadecimal);
  scanf(" %[^\n]", nombre);
  fgets(nombre, 16, stdin);
  return EXIT_SUCCESS;
}
