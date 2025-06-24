#include <stdio.h>

int main() {
    double distancia, litros, consumo;
    scanf("%lf", &distancia);
    scanf("%lf", &litros);

    consumo = distancia / litros;

    if (consumo < 8) {
        printf("Venda o carro!\n");
    } else if (consumo > 12) {
        printf("Super economico!\n");
    } else {
        printf("Economico!\n");
    }

    return 0;
}