#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_of_stickers1, num_of_stickers2, *stickers1, *stickers2, count = 0;
    scanf("%d %d", &num_of_stickers1, &num_of_stickers2);

    stickers1 = (int *)calloc(num_of_stickers1, sizeof(int));
    stickers2 = (int *)calloc(num_of_stickers2, sizeof(int));

    for (int i = 0; i < num_of_stickers1; i++) {
        scanf("%d", &stickers1[i]);
    }
    for (int i = 0; i < num_of_stickers2; i++) {
        scanf("%d", &stickers2[i]);
    }

    for (int i = 0; i < num_of_stickers1; i++) {
        if ((i > 0 && stickers1[i] == stickers1[i - 1])) {
            continue;
        }

        int found = 1;
        for (int j = 0; j < num_of_stickers2; j++) {
            if (stickers1[i] == stickers2[j]) {
                found = 0;
                break;
            }
        }

        if (found) {
            count++;
        }
    }

    printf("%d\n", count);

    free(stickers1);
    free(stickers2);

    return 0;
}