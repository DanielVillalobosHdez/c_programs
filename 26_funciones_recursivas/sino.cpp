#include <stdio.h>
#include <stdlib.h>

bool tiene_un_divisor(int divisor, int posible_divisor){

    if(posible_divisor == 1){
        printf("No hay divisor \n");
        return false;
    }
    if((divisor % posible_divisor) == 0){
        printf("el divisor es %i \n",posible_divisor);
        return true;
    }
    return tiene_un_divisor(divisor, posible_divisor-1);
}

int main(){

    if(tiene_un_divisor(8,7) == true)
        printf("El 8 tiene al menos un divisor\n");
    return EXIT_SUCCESS;
}
