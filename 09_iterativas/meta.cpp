
#include <stdio.h>
#include <stdlib.h>

#define es_impar(f,c) (((f)+ (c)) % 2)

int pinta_cuadrado(int l){
    for(int fila_cuadrado=0; fila_cuadrado<l; fila_cuadrado++)
        for(int fila=0; fila<l; fila++){
            for(int col_cua=0; col_cua<l; col_cua++)
                for(int columna=0; columna<l; columna++)
                    printf("%c",
                            es_impar(fila_cuadrado, col_cua) ?
                            ' ' : '*'
                            );
    printf("\n");
    }
}

int main(){
    pinta_cuadrado(4);


    return EXIT_SUCCESS;
}
