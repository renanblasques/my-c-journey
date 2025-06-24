#include <stdio.h>

int main() {
    int num[10], aux;
    for (int i = 0; i <= 9; i++) {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i <= 8; i++) {
        while (num[i] > num[(i + 1)]) {
            aux = num[i];
            num[i] = num[(i + 1)];
            num[(i + 1)] = aux;
            i = 0;
        }
    }

    for (int i = 0; i <= 9; i++) {
        printf("%d ", num[i]);
    }

    printf("\n");

    return 0;
}