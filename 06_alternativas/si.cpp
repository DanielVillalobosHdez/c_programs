
#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    printf("numero: ");
    scanf(" %i", &numero);

    if (numero % 2 == 0) {
        printf("El número %i es par \n", numero);
        printf("Y los pares me gusta \n");
    } else
        printf ("Impar de mierda!\n");

    printf("Y colorin colorado este cuento se ha \n");


  return EXIT_SUCCESS;
}
