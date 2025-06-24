#include <stdio.h>

int main() {

    int n, quadrado;
    scanf("%d", &n);

    for (int i = 1; (i * i) <= n; i++) {
        quadrado = i * i;
        printf("%d\n", quadrado);        
    }

    return 0;
}