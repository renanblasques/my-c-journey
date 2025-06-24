#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int m, n, flag = 0;
    scanf("%d", &n);

    char nomes[n][101], pessoa[101];
    char *pai[n];

    for (int i = 0; i < n; i++) {
        pai[i] = NULL;
    }

    for (int i = 0; i < n; i++) {
        scanf("%s", nomes[i]);
    }

    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        char nomePai[101], nomeFilho[101];
        int posicaoPai = -1, posicaoFilho = -1;
        scanf("%s", nomePai);
        scanf("%s", nomeFilho);

        for (int j = 0; j < n; j++) {
            if (strcmp(nomePai, nomes[j]) == 0) {
                posicaoPai = j;
            }
            if (strcmp(nomeFilho, nomes[j]) == 0) {
                posicaoFilho = j;
            }
        }

        if ((posicaoPai != -1) && (posicaoFilho != -1)) {
            pai[posicaoFilho] = nomes[posicaoPai];
        }

        posicaoPai = posicaoFilho = -1;
    }

    scanf("%s", pessoa);

    for (int i = 0; i < n; i++) {
        if (pai[i] == NULL) {
            continue;
        }
        if (strcmp(pessoa, pai[i]) == 0) {
            printf("%s\n", nomes[i]);
            flag = 1;
        }
    }


    if (flag == 0) {
        printf("SEM FILHOS");
    }

    return 0;
}