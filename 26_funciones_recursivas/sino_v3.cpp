#include <stdio.h>
#include <stdlib.h>

int tiene_un_divisor(int num, int div){

    if(div <= 1)
        return 1;
    return (num % div == 0 ? div : 0) + tiene_un_divisor(num, div-1);
}

int main(){

    int numero;

    printf("Escribe un numero: ");
    scanf("%i", &numero);

    printf("La suma de %i es igual a %i\n", numero, tiene_un_divisor(numero, numero-1));

    return EXIT_SUCCESS;
}
