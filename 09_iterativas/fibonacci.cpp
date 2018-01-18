
#include <stdio.h>
#include <stdlib.h>

#define N 20

int main(){
    int num[N];

    num[0] = 1;
    num[1] = 1;

    printf("%i\n", num[0]);
    printf("%i\n", num[1]);


    for(int buc=2; buc<N; buc++){
        for(int buc1 = 0; buc1<N; buc1++){
            num[buc] = num [buc1] + num[buc1++];
            printf("%i", num[buc]);
            printf("\n");
            buc++;
        }
    }

    return EXIT_SUCCESS;
}
