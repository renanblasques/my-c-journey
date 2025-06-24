#include <stdio.h>

int main() {

    int num[10], maiorNum, menorNum, somaExtremo;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    if (num[0] >= num[1]){
        maiorNum = num[0];
        menorNum = num[1];
    } else {
        menorNum = num[0];
        maiorNum = num[1];
    }

    for (int i = 2; i < 10; i++) {
        if (num[i] > maiorNum) {
            maiorNum = num[i];
        }
        if (num[i] < menorNum) {
            menorNum = num[i];
        } 
    }

    somaExtremo = maiorNum + menorNum;
    printf("%d\n", somaExtremo);

    return 0;
}