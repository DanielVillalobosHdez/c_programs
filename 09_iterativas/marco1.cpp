#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(){

    int f,c;

    for (int f=0; f<N; f++) {
        for(int c=0; f<N; c++)
            if (f == 0 || f == N-1 || c == 0 || c == N-1)
                printf("*");
          else 
              printf(" ");
    }

    printf("\n");
    return EXIT_SUCCESS;
}
