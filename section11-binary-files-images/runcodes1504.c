#include <stdio.h>
#include <stdlib.h>
//#include "avaliador.h"

int main() {
    FILE *originalFile, *hiddenFile, *outputFile;
    char originalFileName[101], hiddenFileName[101], identifier[101];
    int width, height, rOut, bOut, gOut;
    int rOrig, gOrig, bOrig, rHid, gHid, bHid;

    scanf("%s", originalFileName);
    scanf("%s", hiddenFileName);

    originalFile = fopen(originalFileName, "r");
    hiddenFile = fopen(hiddenFileName, "r");
    outputFile = fopen("imagem_codificada.ppm", "w");

    if ((originalFile == NULL) || (hiddenFile == NULL) || (outputFile == NULL)) {
        printf("Erro ao abrir o(s) arquivo(s).\n");
    }

    fscanf(originalFile, "%s\n", identifier);
    fscanf(hiddenFile, "%*[^\n]\n");
    fprintf(outputFile, "%s\n", identifier);

    fscanf(originalFile, "%d %d\n", &width, &height);
    fscanf(hiddenFile, "%*[^\n]\n");
    fprintf(outputFile, "%d %d\n", width, height);

    fscanf(originalFile, "%*[^\n]\n");
    fscanf(hiddenFile, "%*[^\n]\n");
    fprintf(outputFile, "%d\n", 65535);

    while (!feof(originalFile)) {
        fscanf(originalFile, "%d\n", &rOrig);
        fscanf(originalFile, "%d\n", &gOrig);
        fscanf(originalFile, "%d\n", &bOrig);
        fscanf(hiddenFile, "%d\n", &rHid);
        fscanf(hiddenFile, "%d\n", &gHid);
        fscanf(hiddenFile, "%d\n", &bHid);

        rOut = (rOrig * 256) + rHid;
        gOut = (gOrig * 256) + gHid;
        bOut = (bOrig * 256) + bHid;

        fprintf(outputFile, "%d %d %d\n", rOut, gOut, bOut);
    }

    fclose(originalFile);
    fclose(hiddenFile);
    fclose(outputFile);

//    arquivo_finalizado("imagem_codificada.ppm");

    return 0;
}