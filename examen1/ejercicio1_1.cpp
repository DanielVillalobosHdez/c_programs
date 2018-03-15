

#include <stdio.h>
#include <stdlib.h>

#define N 3

int main(){
  
  double a = {1, 2, 3}, b = {1, 2, 3}, suma;

  for (int i = 0; i < N; i++)
      suma = a[i]* b[i];

  printf(" %d", suma);


  return EXIT_SUCCESS;
}
