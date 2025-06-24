#include <stdio.h>

int main() {

    int num[10], prod = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 10; i++) {
        prod = num[i] * num[(9 - i)];
        printf("%d ", prod);
    }

    printf("\n");

    return 0;
}