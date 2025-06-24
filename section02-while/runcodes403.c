#include <stdio.h>

int main() {
    int x, y, soma;
    scanf("%d %d", &x, &y);

    soma = x;
    x++;

    while (x <= y) {
        soma = soma + x;
        x++;
    }

    printf("%d\n", soma);

    return 0;
}