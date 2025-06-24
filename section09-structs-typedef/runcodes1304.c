#include <stdio.h>
#include <string.h>

typedef struct {
    char code[4];
    int numerator;
    int denominator;
} currencyData;

int main() {

    int n, q;
    
    scanf("%d", &n);
    currencyData currency[n];

    for (int i = 0; i < n; i++) {
        scanf("%s", currency[i].code);
        scanf("%d", &currency[i].numerator);
        scanf("%d", &currency[i].denominator);
    }

    scanf("%d", &q);

    long long centsOut[q];

    for (int i = 0; i < q; i++) {
        long long cents;
        char currencyInCode[4], currencyOutCode[4];

        scanf("%lld", &cents);
        scanf("%s", currencyInCode);
        scanf("%s", currencyOutCode);

        int inId, outId;

        for (int j = 0; j < n; j++) {
            if (strcmp(currencyInCode, currency[j].code) == 0) {
                inId = j;
            }
            if (strcmp(currencyOutCode, currency[j].code) == 0) {
                outId = j;
            }
        }

        long long num = 1LL * cents * currency[inId].numerator * currency[outId].denominator;
        long long den = 1LL * currency[inId].denominator * currency[outId].numerator;

        centsOut[i] = num / den;
    }

    for (int i = 0; i < q; i++) {   
        printf("%.2f\n", (double)centsOut[i] / 100);
    }

    return 0;
}