#include <stdio.h>

int main() {
    double soma = 0;
    int impar, n, i;
    scanf("%d", &n);

    soma = 0;
    impar = i = 1;

    for (i = 1; i <= n; i++){
        soma = soma + ((double) impar / i);
        impar = impar + 2;
    }

    printf("%lf\n", soma);

    return 0;
}