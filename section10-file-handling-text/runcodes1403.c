#include <stdio.h>

int main() {
    FILE *file;
    char fileName[101], ch = ' ';
    int count = 0;

    scanf("%100s", fileName);

    file = fopen(fileName, "r");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fseek(file, count, SEEK_SET);

    while (fgetc(file) != EOF) {
        count++;
        fseek(file, count, SEEK_SET);
    }

    printf("%d\n", count);
    fclose(file);

    return 0;
}