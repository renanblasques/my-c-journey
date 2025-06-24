#include <stdio.h>

int main() {

    int n[10], soma = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (i % 2 != 0) {
            soma += n[i];
        }
    }

    printf("%d\n", soma);

    return 0;
}