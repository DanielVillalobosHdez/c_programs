
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#define N 0X100

int main(){
  const char *p = "The world is: "; //contante tipo cadena
  /* pequeña lección de hoy // un puntero es una variable que contiene una dirección de memoría
  char const *p ;//puntero a una constante, Forma correcta de decir que char es constante
  char * const p; // puentero constante (fijo)
  char const * const p; // puntero fijo a una constante */

  char frase[N] = "a vampire.\n"; // inicialización
  char *d = frase;

  d = &frase[2];

  frase[2] == "v"; // '==' relacional //notación de matrices
  *d == "v"; // notación de punteros
  *(d+2) == "m"; // d + 2 char(byte), el 2 esta en aritmetica de punteros

  printf("d ocupa %lu bytes. \n", sizeof(d));

  return EXIT_SUCCESS;
}
