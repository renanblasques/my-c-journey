#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", 1);

    for (int i = 2; i <= n; i++){
        if (n % i == 0) {
            printf(" %d", i);
        }
    }

    printf("\n");

    return 0;
}