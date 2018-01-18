
#include <stdio.h>
#include <stdlib.h>

int es_par(int num) {
    return num % 2 == 0;
}

int main(){

  if (es_par(2))
      printf("Es par. \n");

  return EXIT_SUCCESS;
}
