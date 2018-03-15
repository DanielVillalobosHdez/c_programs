
#include <stdio.h>
#include <stdlib.h>

#define N 100

bool calcular(int priposible){
    for (int d=2; d<priposible; d++)
        if (priposible % d == 0)
            return false;
    return true;
}

int main(){

    int primos[N];

    for (int primo=0, priposible=2; primo<N; priposible++){
        if (calcular(priposible))
            primos[primo++] = priposible;
        printf(" %i\n", primos[primo++]);
    }

    return EXIT_SUCCESS;
}
