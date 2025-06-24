#include <stdio.h>

int main() {
    int numeroDigitado, maiorNumero, menorNumero;
    scanf("%d", &maiorNumero);
    menorNumero = maiorNumero;

    scanf("%d", &numeroDigitado);
    
    while (numeroDigitado >= 0) {
        if (numeroDigitado > maiorNumero) {
            maiorNumero = numeroDigitado;
        }
        if (numeroDigitado < menorNumero) {
            menorNumero = numeroDigitado;
        }
        scanf("%d", &numeroDigitado);
    }

    printf("%d %d\n", maiorNumero, menorNumero);

    return 0;
}