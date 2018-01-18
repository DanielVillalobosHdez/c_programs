
#include <stdio.h>
#include <stdlib.h>

double suma (double op1,  double op2) {return op1 + op2;}
int main(){
    double op1, op2;

    printf("Primer número: ");
    scanf(" %lf", &op1);
    printf("Segundo número: ");
    scanf(" %lf", &op2);

    double resultado = suma(op1, op2);
    printf("%2lf\n", resultado);

  return EXIT_SUCCESS;
}
