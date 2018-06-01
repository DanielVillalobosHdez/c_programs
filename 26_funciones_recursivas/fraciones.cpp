#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX 0x20

typedef struct {
    int data[MAX];
    int cima;
} Pila;

void push (int data, Pila *pila) {
    pila->data[pila->cima++]=data;
}

int pop (Pila *pila) {
    if(pila->cima < 0)
        return 0;
    return pila->data[--pila->cima];
}

double fc(int *coef, int cima, int num_coef){
    if(num_coef == cima-1)
        return coef[num_coef];
    return coef[num_coef] +1./fc(coef, cima, num_coef+1);
}


int main(){

    Pila coef;
    int input;
    bzero(&coef,sizeof(coef));

    do{
        printf("Introduce un coeficiente: ");
        scanf(" %i\n", &input);
        if(input > 0)
            push(input, &coef);
    } while(input > 0);

    printf("El resultado es: %.2lf\n", fc(coef.data, coef.cima, 0));


    return EXIT_SUCCESS;
}
