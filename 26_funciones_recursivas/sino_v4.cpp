#include <stdio.h>
#include <stdlib.h>

#define NMAX 10000

int tiene_un_divisor(int num, int div){

    if(div <= 1)
        return 1;
    return (num % div == 0 ? div : 0) + tiene_un_divisor(num, div-1);
}

int main(){

    printf("Numeros perfectos\n");

    for(int num = 0; num < NMAX; num++)
        if(num == tiene_un_divisor(num, num-1))
            printf("%i\n", num);

    return EXIT_SUCCESS;
}
