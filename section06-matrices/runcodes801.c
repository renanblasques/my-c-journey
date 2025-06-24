#include <stdio.h>

int main() {

    int num[4][5], sum[5] = {0};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            sum[j] += num[i][j];
        }
        printf("%d ", sum[j]);
    }

    printf("\n");

    return 0;
}