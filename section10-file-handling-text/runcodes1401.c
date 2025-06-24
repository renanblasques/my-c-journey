#include <stdio.h>
//#include "avaliador.h"

int main() {

    FILE *arquivo;
    char texto[101];

    arquivo = fopen("runcodes1401.txt", "w+");
    //arquivo = fopen("mensagem.txt", "w+");

    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo mensagem.txt\n");
        return 1;
    }

    scanf("%s", texto);
    fprintf(arquivo, "%s", texto);

    fclose(arquivo);

    //arquivo_finalizado("mensagem.txt");

    return 0;
}