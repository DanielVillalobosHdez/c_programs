#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define N 0x100

int main(){

  char palabra[N];
  char *puntero = NULL;
  int tamano;
  int palabras;

  printf("cuantas palabras quieres: ");
  scanf(" %i", &palabras);

  for (int i = 0; i < palabras; i++){
      printf("palabra %i: ", i);
      scanf(" %s" palabra);

      tamano = strlen(palabra);
      puntero =(char *) malloc ((tamano+1)* sizeof(char));
  }
  
  for (int r = 0; r < palabras; r++)
      printf(" %s\n", palabra);


  return EXIT_SUCCESS;
}
