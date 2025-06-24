#include <stdio.h>

int main() {
    char cpf[15];
    int digits[11], count, digit_10, digit_11, sum1, sum2;
    count = sum1 = sum2 = 0;
    scanf("%s", cpf);

    for (int i = 0; i < 14; i++) {
        if ((cpf[i] != '.') && (cpf[i] != '-')) {
            digits[count] = cpf[i] - 48;
            count++;
        }
    }

    for (int i = 2; i <= 10; i++) {
        sum1 = sum1 + (digits[10 - i] * i);
    }

    if ((sum1 % 11) < 2) {
        digit_10 = 0;
    } else {
        digit_10 = 11 - (sum1 % 11);
    }

    if (digit_10 != digits[9]) {
        printf("CPF invalido\n");
        return 0;
    }

    for (int i = 2; i <= 11; i++) {
        sum2 = sum2 + (digits[11 - i] * i);
    }

    if ((sum2 % 11) < 2) {
        digit_11 = 0;
    } else {
        digit_11 = 11 - (sum2 % 11);
    }

    if (digit_11 != digits[10]) {
        printf("CPF invalido\n");
        return 0;
    }

    printf("CPF valido\n");


    return 0;
}