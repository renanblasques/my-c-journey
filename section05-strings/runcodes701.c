#include <stdio.h>

int main() {
    char text[10001];
    int i = 0, count = 0, insideWord = 0;
    int c;

    while ((c = getchar()) != EOF && i < 10000) {
        text[i++] = (char)c;
    }
    text[i] = '\0';

    i--;
    while (i >= 0 && (text[i] == ' ' || text[i] == '\t' || text[i] == '\n' || text[i] == '\r')) {
        text[i] = '\0';
        i--;
    }

    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] == ' ' || text[i] == '\t' || text[i] == '\n') {
            insideWord = 0;
        } else if (insideWord == 0) {
            insideWord = 1;
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
