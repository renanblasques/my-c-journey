#include <stdio.h>

int main() {
    long int x, y, resposta;
    scanf("%ld %ld", &x, &y);
    resposta = 1;

    for (int i = 1; i <= y; i++) {
        resposta *= x;
    }

    printf("%ld\n", resposta);

    return 0;
}