#include <stdio.h>

int main()
{
    int mat[5][5], aux;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        aux = mat[i][2];
        mat[i][2] = mat[2][i];
        mat[2][i] = aux;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}