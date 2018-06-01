#include <stdio.h>
#include <stdlib.h>

int resultado = 1;

int factoriales(int numero){

    if(numero == 1)
        return resultado;
    else {
        resultado *= numero;
        factoriales(numero-1);
  }

}


int main(){

    int numero;

    printf("Escribe un número: ");
    scanf("%i", &numero);


    printf("El factorial de %i es %i\n", numero, factoriales(numero));

        return EXIT_SUCCESS;
}
