#include <stdio.h>

int main() {
    double notaAtual, media, porcentagemAlta, notaTotal;
    int numNotasBaixas = 0, numNotasAltas = 0, numNotas = 0;

    scanf("%lf", &notaAtual);
    if (notaAtual >= 5) {
        numNotasAltas++;
    }
    media = notaAtual;
    notaTotal = notaAtual;
    numNotas++;

    scanf("%lf", &notaAtual);

    while (notaAtual >= 0) {
        if (notaAtual >= 5) {
            numNotasAltas++;
        }
        notaTotal = notaTotal + notaAtual;
        numNotas++;
        media = notaTotal / numNotas;
        scanf("%lf", &notaAtual);
    }

    numNotasBaixas = numNotas - numNotasAltas;
    porcentagemAlta = ((double) numNotasAltas / numNotas) * 100;

    printf("%d\n", numNotasBaixas);
    printf("%d\n", numNotasAltas);
    printf("%.2lf\n", media);
    printf("%.1lf%%\n", porcentagemAlta);

    return 0;

}