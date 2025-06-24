#include <stdio.h>

int main()
{
    int mat[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int maxVec[3] = {mat[0][0], 0, 0};
    int minVec[3] = {mat[0][0], 0, 0};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (mat[i][j] > maxVec[0])
            {
                maxVec[0] = mat[i][j];
                maxVec[1] = i;
                maxVec[2] = j;
            }
            if (mat[i][j] < minVec[0])
            {
                minVec[0] = mat[i][j];
                minVec[1] = i;
                minVec[2] = j;
            }
        }
    }

    printf("%d %d %d\n", maxVec[0], maxVec[1], maxVec[2]);
    printf("%d %d %d\n", minVec[0], minVec[1], minVec[2]);
}