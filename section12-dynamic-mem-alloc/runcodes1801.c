#include <stdio.h>
#include <stdlib.h>

char ** createMatrix(int n, int m);
char ** freeMatrix(int n, int m, char **mat);

int main() {
    int number_of_columns, number_of_lines, number_of_movements, score = 0;
    char **arena, *movements, x_position, y_position;
    scanf("%d", &number_of_lines);
    scanf("%d", &number_of_columns);
    scanf("%d", &number_of_movements);

    arena = createMatrix(number_of_lines, number_of_columns);
    movements = (char *)calloc(number_of_movements, sizeof(char));

    if ((arena == NULL) || (movements == NULL)) {
        printf("Erro ao alocar vetor ou matriz.\n");
        return 1;
    }

    for (int i = 0; i < number_of_lines; i++) {
        for (int j = 0; j < number_of_columns; j++) {
            scanf(" %c", &arena[i][j]);
            if (arena[i][j] == 'R') {
                x_position = j;
                y_position = i;
                arena[i][j] = '.';
            }
        }
    }

    scanf("%s", movements);

    for (int i = 0; i < number_of_movements; i++) {
        if (movements[i] == 'N') {
            if ((y_position - 1 >= 0) && (arena[y_position - 1][x_position] != '#')) {
                if (arena[y_position - 1][x_position] == '*') {
                    arena[y_position - 1][x_position] = '.';
                    score++;
                }
                y_position--;
            }
        } else if (movements[i] == 'S') {
            if ((y_position + 1 < number_of_lines) && (arena[y_position + 1][x_position] != '#')) {
                if (arena[y_position + 1][x_position] == '*') {
                    arena[y_position + 1][x_position] = '.';
                    score++;
                }
                y_position++;
            }
        } else if (movements[i] == 'L') {
            if ((x_position + 1 < number_of_columns) && (arena[y_position][x_position + 1] != '#')) {
                if (arena[y_position][x_position + 1] == '*') {
                    arena[y_position][x_position + 1] = '.';
                    score++;
                }
                x_position++;
            }
        } else if (movements[i] == 'O') {
            if ((x_position - 1 >= 0) && (arena[y_position][x_position - 1] != '#')) {
                if (arena[y_position][x_position - 1] == '*') {
                    arena[y_position][x_position - 1] = '.';
                    score++;
                }
                x_position--;
            }
        }        
    }

    printf("%d\n", score);

    if (freeMatrix(number_of_lines, number_of_columns, arena) != NULL) {
        printf("Erro ao desalocar matriz.\n");
        return 1;
    }

    return 0;
}

char ** createMatrix(int n, int m) {
    char **mat;
    mat = (char **)calloc(n, sizeof(char *));
    if (mat == NULL) {
        printf("Erro ao criar matriz.\n");
        return NULL;
    }

    for (int i = 0; i < n; i++) {
        mat[i] = (char *)calloc(m, sizeof(char));
        if (mat[i] == NULL) {
            printf("Erro ao criar matriz.\n");
            return NULL;
        }
    }
    return mat; 
}

char ** freeMatrix(int n, int m, char **mat) {
    if (mat == NULL) {
        return NULL;
    }

    for (int i = 0; i < n; i++) {
        free(mat[i]);
    }
    free(mat);

    return NULL;
}