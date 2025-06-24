#include <stdio.h>

int main() {
    int n, aux, aux1 = 1;
    scanf("%d", &n);
    aux = n;

    for (int i = 0; i < aux - 1; i++) {
        for (int j = 0; j < aux1; j++) {
            printf("*\t");
        }
        printf("\n");
        aux1++;
    }

    for (int j = aux; j >= 0; j--) {
        for (int i = 0; i < n; i++) {
            printf("*\t");
        }
        if (j != 0) {
            printf("\n");
        }
        n--;
    }

    return 0;
}