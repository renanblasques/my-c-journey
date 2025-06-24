#include <stdio.h>
#include <stdlib.h>
//#include "avaliador.h"

int main() {
    FILE *file, *outputFile;
    char fileName[101], identifier[101];
    int width, height, red, blue, green;

    scanf("%s", fileName);
    file = fopen(fileName, "r");
    outputFile = fopen("runcodes1503out.ppm", "w");
    //outputFile = fopen("imagem_escondida_extraida.ppm", "w");

    if ((file == NULL) || (outputFile == NULL)) {
        printf("Erro ao abrir o(s) arquivo(s).\n");
    }

    fscanf(file, "%s\n", identifier);
    fprintf(outputFile, "%s\n", identifier);

    fscanf(file, "%d %d\n", &width, &height);
    fprintf(outputFile, "%d %d\n", width, height);

    fscanf(file, "%*[^\n]\n");
    fprintf(outputFile, "%d\n", 255);

    while (!feof(file)) {
        fscanf(file, "%d %d %d\n", &red, &green, &blue);
        red = red % 256;
        green = green % 256;
        blue = blue % 256;
        fprintf(outputFile, "%d %d %d\n", red, green, blue);
    }

    fclose(file);
    fclose(outputFile);

    //arquivo_finalizado("imagem_escondida_extraida.ppm");

    return 0;
}