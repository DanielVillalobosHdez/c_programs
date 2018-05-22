#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

typedef struct {

    char firma[2];
    int tamano;
    unsigned short null1;
    unsigned short null2;
    int comienzo;
} cabecera;

typedef struct {
    int size_head;
    int width;
    int height;
    short int colorplanes;
    short int  bitspixel;
    int compres;
    int imagesize;
    int horizontal;
    int vertical;
    int numbercolors;
    int importantcolors;

} DIB;


void head (cabecera header) {
    printf("*****************CABECERA***********************\n");
    printf("firma: %c%c\n", header.firma[0], header.firma[1]);
    printf("Tamaño: %i\n", header.tamano);
    printf("Comienzo: %i\n", header.comienzo);

}

void Dhead (DIB dibheader) {
    printf("****************DIB CABECERA********************\n");
    printf("Tamaño de la cabecera: %i\n", dibheader.size_head);
    printf("Ancho: %i\n", dibheader.width);
    printf("Alto: %i\n", dibheader.height);
    printf("Planos de color: %hi\n", dibheader.colorplanes);
    printf("Bits por pixel : %hi\n", dibheader.bitspixel);

    switch (dibheader.compres){
    case 0:
        printf("Compresión: BI_RGB\n");
        break;
    case 1:
        printf("Compresión: BI_RLE8\n");
        break;

    case 2:
        printf("Compresión: BI_RLE4\n");
        break;

    case 3:
        printf("Compresión: BI_BITFIELDS\n");
        break;

    case 4:
        printf("Compresión: BI_JPEG\n");
        break;

    case 5:
        printf("Compresión: BI_PNG\n");
        break;

    case 6:
        printf("Compresión: BI_ALFABITFIELDS\n");
        break;

    case 11:
        printf("Compresión: BI_CMYK\n");
        break;

    case 12:
        printf("Compresión: BI_CMYKRLE8\n");
        break;

    case 13:
        printf("Compresión: BI_CMYKRL4\n");
        break;
}
        printf("Tamaño de la imagen: %i\n", dibheader.imagesize);
        printf("Resolución horizontal: %i\n", dibheader.horizontal);
        printf("Resolución vertical: %i\n", dibheader.vertical);
        printf("Número de colores: %i\n", dibheader.numbercolors);
        printf("Número de colores importantes utilizados: %i\n", dibheader.importantcolors);
}

int main(){

    FILE *parchivo = NULL;
    cabecera header;
    DIB DibHeader;

    if (!(parchivo = fopen("a.bmp", "r"))){
        fprintf( stderr, "No he encontrado el fichero.\n"  );
        return EXIT_FAILURE;
    }

    fread(&header, sizeof(cabecera), 1, parchivo);
    fread(&DibHeader, sizeof(DIB), 1, parchivo);
    fclose(parchivo);

    head(header);
    Dhead(DibHeader);

    return EXIT_SUCCESS;
}
