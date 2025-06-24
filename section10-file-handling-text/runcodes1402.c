#include <stdio.h>

int main() {

    FILE *arq;
    char nomeArquivo[50];
    char texto[1000];
    int i = 0;
    char ch = ' ';

    scanf("%s", nomeArquivo);

    arq = fopen(nomeArquivo, "r");

    if (arq == NULL) {
        printf("Erro ao ler o arquivo %s\n", nomeArquivo);
        return 1;
    }
    
    fseek(arq, i, SEEK_SET);

    for (int j = 0; j < 3; j++) {
        while (ch != '\n') {
            ch = fgetc(arq);
            i++;
            printf("%c", ch);
        }
        ch = ' ';
        fseek(arq, i, SEEK_SET);
    }
    
    fclose(arq);

    return 0;
}