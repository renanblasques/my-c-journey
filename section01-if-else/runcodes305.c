#include <stdio.h>

int main() {
    char operacao;
    int n1, n2, op;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf(" %c", &operacao);

    switch (operacao) {
        case '+':
            op = n1 + n2;
            printf("%d\n", op);
            break;
        case '-':
            op = n1 - n2;
            printf("%d\n", op);
            break;
        case '*':
            op = n1 * n2;
            printf("%d\n", op);
            break;
        case '/':
            if (n2 == 0) {
                printf("Erro: divisao por zero\n");
            } else {
                float divisao;
                divisao = (float) n1 / n2;
                printf("%.2f\n", divisao);
            }
            break;
        default :
            printf("Erro: operacao invalida\n");
            break;
    }

    return 0;
}