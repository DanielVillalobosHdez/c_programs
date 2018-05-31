#include <stdio.h>
#include <stdlib.h>

bool tiene_un_divisor(int divisor, int posible_divisor){

    int suma = 0;
    if(posible_divisor == 0){
        printf("%i no es perfecto\n");
        return false;
    }
    if((divisor % posible_divisor) == 0){
        suma += posible_divisor;
        if(suma == divisor)
            return true;
        if(suma != divisor) {
            printf("%i no es perfecto\n", divisor);
            return tiene_un_divisor(divisor, posible_divisor-1);
        }
    }

}

int main(){

    int numero;	

    printf("Escribe un numero: ");
    scanf("%i", &numero);

    if(tiene_un_divisor(numero, numero-1) == true)
        printf("El %i es un numero perfecto\n", numero);
    return EXIT_SUCCESS;
}
