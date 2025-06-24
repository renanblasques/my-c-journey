#include <stdio.h>

int main() {

    int a[5], b[5], s[5];

    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
    scanf(" %d %d %d %d %d", &b[0], &b[1], &b[2], &b[3], &b[4]);

    for (int i = 0; i < 5; i++){
        s[i] = a[i] + b[i];
    }

    printf("%d %d %d %d %d\n", s[0], s[1], s[2], s[3], s[4]);

    return 0;
}