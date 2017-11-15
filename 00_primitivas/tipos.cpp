
#include <stdio.h>
#include <stdlib.h>

#define ROJO "\x1B[31m"
#define NORM "\x1B[39m"
int main(){
  int entero = 34 ;
  float realillo = 35.7 ;
  double real = 35.7 ;
  unsigned char byte = 97;

  long int entero_largo = 93;
  unsigned positivo = 1;
  
  system ( "toilet " )
  printf ( "%i\t (%lu bytes)\n", entero, sizeof(int) );
  printf ( "%f\t (%lu bytes)\n", realillo, sizeof(float) );
  printf ( "%lf\t (%lu bytes)\n", real, sizeof(double) );

  printf ( "%c%c%c", 49, 50, 10 );
  printf ( "%c%c%c", 0x31, 0x32, 0xa );
  printf ( "%c%c%c", '1', '2', "\n" );
  printf ( ROJO "12" NORM );


  return EXIT_SUCCESS;
}
