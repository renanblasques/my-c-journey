#include <stdio.h>

int main()
{
    int n, firstSum = 0, sum = 0, match = 1;
    scanf("%d", &n);
    int mat[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    
    //Sum of first line
    for (int j = 0; j < n; j++)
        firstSum += mat[0][j];

    //Sum of next lines
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum += mat[i][j];
        }
        if (sum != firstSum) {
            match = 0;
            i = n;
        }
        sum = 0;
    }

    //Sum of columns
    if (match) {
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < n; i++) {
                sum += mat[i][j];
            }
            if (sum != firstSum) {
                match = 0;
                j = n;
            }
            sum = 0;
        }
    }

    //Sum of main diagonal
    if (match)
    {
        for (int i = 0; i < n; i++) {
            sum += mat[i][i];
        }
        if (sum != firstSum) {
            match = 0;
        }
        sum = 0;
    }

    //Sum of secondary diagonal
    if (match) {
        for (int i = 0; i < n; i++) {
            sum += mat[i][n - i - 1];
        }
        if (sum != firstSum) {
            match = 0;
        }
    }

    if (match)
        printf("SIM\n");
    else
        printf("NAO\n");

    return 0;
}