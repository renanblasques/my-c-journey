#include <stdio.h>

int main() {
    int a, b, c, aux;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if ((a == b) || (a == c) || (b == c)) {
        printf("Erro: os numeros devem ser distintos.\n");
    } else {
        if (a > b) {
            aux = a;
            a = b;
            b = aux;
        }
        if (a > c) {
            aux = c;
            c = a;
            a = aux;
        }
        if (b > c) {
            aux = b;
            b = c;
            c = aux;
        }

        printf("%d %d %d\n", a, b, c);
    }

    return 0;
}