#include <stdio.h>

int main() {
    int valor, n200, n100, n50, n10, n2, n1;
    scanf("%d", &valor);
    n200 = valor / 200;
    valor = valor % 200;
    n100 = valor / 100;
    valor = valor % 100;
    n50 = valor / 50;
    valor = valor % 50;
    n10 = valor / 10;
    valor = valor % 10;
    n2 = valor / 2;
    n1 = valor % 2;

    if (n200 > 0) {
        printf("%d nota(s)/moeda(s) de R$200\n", n200);
    }
    if (n100 > 0) {
        printf("%d nota(s)/moeda(s) de R$100\n", n100);
    }
    if (n50 > 0) {
        printf("%d nota(s)/moeda(s) de R$50\n", n50);
    }
    if (n10 > 0) {
        printf("%d nota(s)/moeda(s) de R$10\n", n10);
    }
    if (n2 > 0) {
        printf("%d nota(s)/moeda(s) de R$2\n", n2);
    }
    if (n1 > 0) {
        printf("%d nota(s)/moeda(s) de R$1\n", n1);
    }

    return 0;
}