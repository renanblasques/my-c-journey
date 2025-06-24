#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE *file;

    unsigned char fileName[101], buffer[8];
    
    char bmp[] = "\x42\x4D";
    char png[] = "\x89\x50\x4E\x47\x0D\x0A\x1A\x0A";
    char gif[] = "\x47\x49\x46\x38";
    char jpeg[] = "\xFF\xD8\xFF";
    char pdf[] = "\x25\x50\x44\x46";
    char zip[] = "\x50\x4B\x03\x04";
    char elf[] = "\x7F\x45\x4C\x46";
    char wav[] = "\x52\x49\x46\x46";
    char mp3a[] = "\xFF\xFB";
    char mp3b[] = "\x49\x44\x33";

    int countBytes;

    scanf("%s", fileName);

    file = fopen(fileName, "rb");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    fread(buffer, sizeof(buffer), 1, file);

    if ((memcmp(buffer, bmp, 2)) == 0) {
        printf("Arquivo BMP\n");
    } else if ((memcmp(buffer, png, 8)) == 0) {
        printf("Arquivo PNG\n");
    } else if ((memcmp(buffer, gif, 4)) == 0) {
        printf("Arquivo GIF\n");
    } else if ((memcmp(buffer, jpeg, 3)) == 0) {
        printf("Arquivo JPEG\n");
    } else if ((memcmp(buffer, pdf, 4)) == 0) {
        printf("Arquivo PDF\n");
    } else if ((memcmp(buffer, zip, 4)) == 0) {
        printf("Arquivo ZIP\n");
    } else if ((memcmp(buffer, elf, 4)) == 0) {
        printf("Arquivo ELF\n");
    } else if ((memcmp(buffer, wav, 4)) == 0) {
        printf("Arquivo WAV\n");
    } else if ((memcmp(buffer, mp3a, 2)) == 0) {
        printf("Arquivo MP3\n");
    } else if ((memcmp(buffer, mp3b, 3)) == 0) {
        printf("Arquivo MP3\n");
    } else {
        printf("Tipo de arquivo desconhecido\n");
    }

    fclose(file);

    return 0;
}