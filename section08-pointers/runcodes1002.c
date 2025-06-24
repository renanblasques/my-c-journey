#include <stdio.h>

void findBiggest(int v[], int **pBiggestNumber);

int main() {
    int v[10], i, *pBiggest, *pSmallest;
    for (i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }
    pBiggest = pSmallest = &v[0];

    for (i = 1; i < 10; i++) {
        if (v[i] > (*pBiggest)) {
            pBiggest = &v[i];
        }
    }

    for (i = 1; i < 10; i++) {
        if (v[i] < (*pSmallest)) {
            pSmallest = &v[i];
        }
    }

    printf("%d\n%d\n", *pBiggest, *pSmallest);

    return 0;
}