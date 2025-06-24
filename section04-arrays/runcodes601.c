#include <stdio.h>

int main() {
    int num[10];

    for (int i = 0; i <= 9; i++) {
        scanf("%d", &num[i]);
    }

    for (int i = 9; i >= 0; i--) {
        printf("%d ", num[i]);
    }

    printf("\n");

    return 0;
}