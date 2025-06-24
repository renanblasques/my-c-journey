#include <stdio.h>

int main() {

    long int n, fat = 1;
    scanf("%ld", &n);

    for (int i = 1; i <= n; i++) {
        fat = fat * i;
    }

    printf("%ld\n", fat);

    return 0;
}