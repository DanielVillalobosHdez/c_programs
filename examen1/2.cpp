
#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcion;

    do {
        printf("Por Favor introduzca una de las opciones:...");
        scanf("%i", &opcion);
        printf("valor introducido correctamente");

    }while((opcion>0)&&(opcion<6));

    if (opcion >5){
        printf("introduzca otra opcion");
    } 


    return EXIT_SUCCESS;
}
