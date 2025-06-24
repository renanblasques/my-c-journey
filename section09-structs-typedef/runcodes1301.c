#include <stdio.h>

int main() {

    struct dados_carro {
        char fabricante[21];
        char modelo[21];
        int ano;
        char cor[21];
        double preco;
    };

    struct dados_carro carro;
    
    scanf("%s", carro.fabricante);
    scanf("%s", carro.modelo);
    scanf("%d", &carro.ano);
    scanf("%s", carro.cor);
    scanf("%lf", &carro.preco);

    printf("Fabricante: %s\n", carro.fabricante);
    printf("Modelo: %s\n", carro.modelo);
    printf("Ano: %d\n", carro.ano);
    printf("Cor: %s\n", carro.cor);
    printf("Preço: %.2lf\n", carro.preco);

    return 0;
}