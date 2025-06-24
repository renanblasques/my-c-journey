#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    unsigned char fileName[101], buffer[16];
    int countBytes;

    scanf("%100s", fileName);
    file = fopen(fileName, "rb");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((countBytes = fread(buffer, 1, sizeof(buffer), file)) > 0) {
        for (int i = 0; i < countBytes; i++) {
            printf("%02x ", buffer[i]);
        }
        printf("\n");
    }
    
    fclose(file);

    return 0;
}