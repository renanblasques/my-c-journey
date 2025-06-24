#include <stdio.h>

int main() {
    double imc, weight, height;
    scanf("%lf %lf", &weight, &height);

    imc = weight / (height * height);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if ((imc >= 18.5) && (imc < 25.0)) {
        printf("Peso normal\n");
    } else if ((imc >= 25.0) && (imc < 30.0)) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidade\n");
    }

    return 0;
}