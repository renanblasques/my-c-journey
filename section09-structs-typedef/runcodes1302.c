#include <stdio.h>

int main() {

    int id;

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
    scanf("%d", &id);

    switch (id) {
    case 1:
        scanf("%s", carro.fabricante);
        break;
    case 2:
        scanf("%s", carro.modelo);
        break;
    case 3:
        scanf("%d", &carro.ano);
        break;
    case 4:
        scanf("%s", carro.cor);
        break;
    case 5:
        scanf("%lf", &carro.preco);
        break;
    default:
        break;
    }

    printf("%s\n", carro.fabricante);
    printf("%s\n", carro.modelo);
    printf("%d\n", carro.ano);
    printf("%s\n", carro.cor);
    printf("%.2lf\n", carro.preco);

    return 0;
}