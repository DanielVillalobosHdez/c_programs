#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int resultado = 1;

double factoriales(int numero){

    if(numero == 1)
        return resultado;
    else {
        resultado *= numero;
        factoriales(numero-1);
  }

}


double fc(int numero){
    if(numero == 1)
        return 1;
    return factoriales(numero) + 1./fc(numero-1);
}


int main(){

	int input;

        printf("Introduce un coeficiente: ");
        scanf(" %i\n", &input);
	
    printf("El resultado es: %.2lf\n", fc(input));


    return EXIT_SUCCESS;
}

