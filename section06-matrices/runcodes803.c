#include <stdio.h>

int main()
{
    int mat[4][5], maxN, minN, count = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    scanf("%d", &minN);
    scanf("%d", &maxN);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((mat[i][j] >= minN) && (mat[i][j] <= maxN))
            {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}