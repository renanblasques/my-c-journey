#include <stdio.h>
#include <string.h>

int main() {
    char s[1001], limpa[1001];
    int j = 0, flag = 1, size;
    scanf("%[^\n]", s);
    size = strlen(s);
    if ((s[size - 1] == '\n') || (s[size - 1] == '\r')) {
        s[size - 1] = '\0';
    }
    if ((s[size - 2] == '\n') || (s[size - 2] == '\r')) {
        s[size - 2] = '\0';
    }

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ') {
            limpa[j] = s[i];
            j++;
        }
    }
    limpa[j] = '\0';

    for (int i = 0; i < j; i++) {
        if (limpa[i] != limpa[j - i - 1]) {
            flag = 0;
        }
    }

    if (flag) {
        printf("SIM");
    } else {
        printf("NAO");
    }

    return 0;
}