#include <stdio.h>
#include <string.h>
#include <ctype.h>
//#include "avaliador.h"

void to_uppercase(char word[], char result[]);

int main() {
    FILE *inFile, *outFile;
    char inFileName[101], outFileName[101], word[101], wordUppercase[101];
    int lineCounter = 0, chCounter = 0, seek = 0;
    
    scanf("%s", inFileName);
    scanf("%s", outFileName);
    scanf("%s", word);

    to_uppercase(word, wordUppercase);

    inFile = fopen(inFileName, "r");
    outFile = fopen(outFileName, "a");

    if (inFile == NULL) {
        printf("Erro ao abrir o(s) arquivo(s).\n");
        return 1;
    }

    fseek(inFile, 0, SEEK_SET);

    char sentence[1001];

    int i = 0;
    while (feof(inFile) == 0) {
        sentence[i] = fgetc(inFile);
        i++;
        if (sentence[i - 1] == '\n') {
            sentence[i] = '\0';
            char sentenceUppercase[i + 1];
            sentenceUppercase[i] = '\0';
            to_uppercase(sentence,sentenceUppercase);
            i = 0;

            char *p = strstr(sentenceUppercase, wordUppercase);
            if (p) {
                fprintf(outFile, "%s", sentence);
            }
        }
    }
    
    fclose(inFile);
    fclose(outFile);

//    arquivo_finalizado("saida.txt");

    return 0;
}

void to_uppercase(char word[], char result[]) {
    int length = strlen(word);    
    for (int i = 0; i < length; i++) {
        if ((word[i] >= 97) && (word[i] <= 122)) {
            result[i] = word[i] - 32;
        } else {
            result[i] = word[i];
        }
    }
    result[length] = '\0';
}