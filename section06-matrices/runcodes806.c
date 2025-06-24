#include <stdio.h>

int main()
{
    int mat[8][8], anyCapture = 0;
    int captureCoords[1000], movCoords[1000], blockedCoords[1000];
    int k = 0, l = 0, m = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (mat[i][j] == -1) {
                int flag = 0;
                // Possible capture 1 - Left Diagonal
                if (mat[i - 1][j - 1] == 1) {
                    // Check if next 2 columns exists, then if next 2 lines exists, then if it's zero
                    if ((j - 2 >= 0) && (i - 2 >= 0) && (mat[i - 2][j - 2] == 0)) {
                        captureCoords[k] = i;
                        captureCoords[k + 1] = j;
                        k = k + 2;
                        flag = 1;
                    }
                // Possible capture 2 - Right Diagonal
                } else if (mat[i - 1][j + 1] == 1) {
                    // Check if next 2 columns exist, then if next 2 lines exist, then if it's zero
                    if ((j + 2 <= 7) && (i - 2 >= 0) && (mat[i - 2][j + 2] == 0)) {
                        captureCoords[k] = i;
                        captureCoords[k + 1] = j;
                        k = k + 2;
                        flag = 1;
                    }
                }

                // Possible movement 1 - Left Diagonal
                if ((flag == 0) && (mat[i - 1][j - 1] == 0)) {
                    // Check if next column exists, then if next lines exists
                    if ((j - 1 >= 0) && (i - 1 >= 0)) {
                        movCoords[l] = i;
                        movCoords[l + 1] = j;
                        l = l + 2;
                        flag = 1;
                    }
                // Possible movement 2 - Right Diagonal
                } else if ((flag == 0) && (mat[i - 1][j + 1] == 0)) {
                    // Check if next column exists, then if next line exists, then if it's zero
                    if ((j + 1 <= 7) && (i - 1 >= 0)) {
                        movCoords[l] = i;
                        movCoords[l + 1] = j;
                        l = l + 2;
                        flag = 1;
                    }
                }
                // Blocked piece
                if (flag == 0) {
                    blockedCoords[m] = i;
                    blockedCoords[m + 1] = j;
                    m = m + 2;
                }
            }
        }
    }

    if (k == 0) {
        printf("None\n");
    } else {
        for (int p = 0; p < k; p = p + 2) {
            printf("(%d,%d) ", captureCoords[p], captureCoords[p + 1]);
        }
        printf("\n");
    }


    if (l == 0) {
        printf("None\n");
    } else {
        for (int p = 0; p < l; p = p + 2) {
            printf("(%d,%d) ", movCoords[p], movCoords[p + 1]);
        }
        printf("\n");
    }


    if (m == 0) {
        printf("None\n");
    } else {
        for (int p = 0; p < m; p = p + 2) {
            printf("(%d,%d) ", blockedCoords[p], blockedCoords[p + 1]);
        }
        printf("\n");
    }

    return 0;
}