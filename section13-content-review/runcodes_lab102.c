#include <stdio.h>

int main() {
    double cpf;
    long int n1, n2, n3, n4;
    scanf("%lf", &cpf);

    n1 = cpf / 100000000;
    n2 = cpf / 100000 - (n1 * 1000);
    n3 = (cpf / 100) - (((n1 * 1000) + n2) * 1000);
    n4 = cpf - (((n1 * 1000000) + (n2 * 1000) + (n3)) * 100);

    printf("%03ld.%03ld.%03ld-%02ld\n", n1, n2, n3, n4);

    return 0;
}