#include <stdio.h>
#include <string.h>

int main() {

    FILE *file;

    char name[101], fileName[101];
    float grades[3], mean;

    scanf("%s", fileName);
    file = fopen(fileName, "r");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fscanf(file, "%*[^\n]\n");

    while (!feof(file)) {
        fscanf(file, "%99[^,],%f,%f,%f\n", name, &grades[0], &grades[1], &grades[2]);
        mean = (grades[0] + grades[1] + grades[2]) / 3.f;

        printf("%s %.1f\n", name, mean);
    }

    return 0;
}