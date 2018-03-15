#include <stdio.h>
#include <stdlib.h>

void datos(int *a, int *b){
    printf("Primer Dato: ");
    scanf(" %i", a);
    printf("Segundo Dato: ");
    scanf(" %i", b);
}

int main(){
    int d1, d2;

    datos(&d1, &d2);
    printf(" %i", d1);
    printf(" %i", d2);



  return EXIT_SUCCESS;
}
