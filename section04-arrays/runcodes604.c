#include <stdio.h>

int main() {

    int n[10], dif, maiorDif;
    dif = maiorDif = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &n[i]);
    }

    for (int i = 1; i < 10; i++) {
        dif = n[i] - n[(i - 1)];
        if (dif < 0) {
            dif = (-1) * dif;
        }
        if (dif >= maiorDif) {
            maiorDif = dif;
        }
    }

    printf("%d\n", maiorDif);

    return 0;
}