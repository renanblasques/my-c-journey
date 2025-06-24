#include <stdio.h>
#include <stdlib.h>

int ** createMatrix(int n, int m);
int ** freeMatrix(int n, int m, int **mat);

int main() {
    int m, n, **mat;
    scanf("%d %d", &n, &m);

    mat = createMatrix(n, m);
    if (mat == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = (m - 1); j >= 0; j--) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    if (freeMatrix(n, m, mat) != NULL) {
        printf("Erro ao desalocar matriz.\n");
        return 1;
    }

    return 0;
}

int ** createMatrix(int n, int m) {
    int **mat;
    mat = (int **)calloc(n, sizeof(int *));
    if (mat == NULL) {
        printf("Erro ao criar matriz.\n");
        return NULL;
    }

    for (int i = 0; i < n; i++) {
        mat[i] = (int *)calloc(m, sizeof(int));
        if (mat[i] == NULL) {
            printf("Erro ao criar matriz.\n");
            return NULL;
        }
    }
    return mat; 
}

int ** freeMatrix(int n, int m, int **mat) {
    if (mat == NULL) {
        return NULL;
    }

    for (int i = 0; i < n; i++) {
        free(mat[i]);
    }
    free(mat);

    return NULL;
}