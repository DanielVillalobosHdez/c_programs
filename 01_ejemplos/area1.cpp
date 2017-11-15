
#include <stdio.h>
#include <stdlib.h>

int main(){
   float lado, area, perimetro;

  system("toilet --gay -fpagga CUADRADO");

  //Entrada de datos
  printf("Lado: ");
  scanf (" %f", &lado);

  //Calculos
  area = lado * lado;
  perimetro = 4 * lado;

  //Salida de datos
  printf  ( "Area: %f\n"
            "Perimetro: %f\n",
            area, perimetro );


  return EXIT_SUCCESS;
}
