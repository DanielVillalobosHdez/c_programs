
#include <stdio.h>
#include <stdlib.h>

void interfaz () {
    printf("\n");
    printf("\t\t\t");
    for(int f=0; f<3; f++)
        printf("|%i_", f);
    printf("\n");
    for(int c=0; c<3; c++)
    printf("\t\t      %i_|\n", c);
    printf("\t\t\t");
    for(int f=0; f<3; f++)
        for(int c=0; c<3; c++)
            printf("|__");
    for(int c=0; c<3; c++)
        printf("\t\t      %i_|\n", c);

}

int main(){

    interfaz();

    return EXIT_SUCCESS;
}
