
#include <stdio.h>

struct vetor {
    int x;
    int y;
    int z;
};

struct vetor calcularProdVet(struct vetor v[]);

int main() {
    struct vetor v[2], prodv;

    for (int i = 0; i < 2; i++) {
        scanf("%d", &v[i].x);
        scanf("%d", &v[i].y);
        scanf("%d", &v[i].z);
    }

    prodv = calcularProdVet(v);
    printf("%d ", prodv.x);
    printf("%d ", prodv.y);
    printf("%d\n", prodv.z);

    return 0;
}

struct vetor calcularProdVet(struct vetor v[]) {
    struct vetor prodv;

    prodv.x = v[0].y * v[1].z - v[0].z * v[1].y;
    prodv.y = v[0].z * v[1].x - v[0].x * v[1].z;
    prodv.z = v[0].x * v[1].y - v[0].y * v[1].x;

    return prodv;
}
