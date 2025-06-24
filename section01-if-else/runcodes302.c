#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    if (year % 4 == 0) {
        if ((year % 100 != 0) || (year % 400 == 0)) {
            printf("e ano bissexto\n");
        } else {
            printf("nao e ano bissexto\n");
        }
    } else {
        printf("nao e ano bissexto\n");
    }

    return 0;
}