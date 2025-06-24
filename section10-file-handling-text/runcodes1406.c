#include <stdio.h>
#include <string.h>
//#include "avaliador.h"

int main() {

    FILE *inFile, *outFile;
    char inFileName[101], outFileName[101];

    scanf("%s", inFileName);
    scanf("%s", outFileName);

    inFile = fopen(inFileName, "r");
    outFile = fopen(outFileName, "w");

    if ((inFile == NULL) || (outFile == NULL)) {
        printf("Erro ao abrir arquivo(s).\n");
        return 1;
    }

    char sentence[101], ch;
    int i = 0, lineCounter = 0;

    while (feof(inFile) != 1) {
        ch = fgetc(inFile);
        sentence[i] = ch;
        i++;
        if (ch == '\n') {
            sentence[i] = '\0';
            lineCounter++;
            fprintf(outFile, "%03d: %s", lineCounter, sentence);
            i = 0;
        }
    }

    fclose(inFile);
    fclose(outFile);

//    arquivo_finalizado("poema_numerado.txt");

    return 0;
}