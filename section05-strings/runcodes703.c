#include <stdio.h>

int main()
{
    char string[1001], substring[1001];
    int stringLength = 0, substringLength = 0, i = 0, count = 0, result = 0;
    scanf("%s", string);
    scanf("%s", substring);

    if (substring[0] == '\0') {
        result = 1;
        printf("%d\n", result);
    }
    else {
        for (i = 0; string[i] != '\0'; i++) {
            stringLength++;
        }

        for (i = 0; substring[i] != '\0'; i++) {
            substringLength++;
        }

        for (i = 0; i < stringLength; i++) {
            if (string[i] == substring[0]) {
                for (int j = 0; j < substringLength; j++) {
                    if (string[i + j] == substring[j]) {
                        count++;
                        if (count == substringLength) {
                            result = 1;
                        }
                    }
                }
                count = 0;
            }
        }

        printf("%d\n", result);
    }
    
    return 0;
}