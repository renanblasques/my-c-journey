#include <stdio.h>
#include <string.h>

int main() {
    char character, sentence[1001];
    int lenght;

    scanf("%[^\n] %c", sentence, &character);
    lenght = strlen(sentence);


    for (int i = 0; i < (lenght); i++) {
        if (sentence[i] != character) {
            printf("%c", sentence[i]);
        }
    }

    printf("\n");

    return 0;
}

