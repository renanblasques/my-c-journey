#include <stdio.h>

int main() {
    int anoInicial, anoFinal;
    scanf("%d", &anoInicial);
    scanf("%d", &anoFinal);

    while (anoInicial <= anoFinal) {
        if (anoInicial % 4 == 0) {
            if ((anoInicial % 100 != 0) || (anoInicial % 400 == 0)) {
                printf("%d\n", anoInicial);
                anoInicial++;
            } else {
                anoInicial++;
            }
        } else {
            anoInicial++;
        }
    }
    
    return 0;
}