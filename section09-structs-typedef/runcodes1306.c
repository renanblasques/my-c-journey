#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
    double z;
} coords;

coords calcularProdVet(coords u, coords v);

coords calcularVetorEntrePontos(coords a, coords b);

double calcularNormaVetor(coords v);

int main() {
	coords p, r, diretor, vPR, produtoVetorial;
	double normaProdutoVetorial, normaDiretor, distancia;

	scanf("%lf", &p.x);
	scanf("%lf", &p.y);
	scanf("%lf", &p.z);
	
	scanf("%lf", &r.x);
	scanf("%lf", &r.y);
	scanf("%lf", &r.z);
	
	scanf("%lf", &diretor.x);
	scanf("%lf", &diretor.y);
	scanf("%lf", &diretor.z);

    vPR = calcularVetorEntrePontos(p, r);
    produtoVetorial = calcularProdVet(diretor, vPR);
    normaProdutoVetorial = calcularNormaVetor(produtoVetorial);
    normaDiretor = calcularNormaVetor(diretor);

    distancia = normaProdutoVetorial / normaDiretor;

    printf("%.6lf\n", distancia);

    return 0;
}

coords calcularProdVet(coords u, coords v) {
    coords prodv;

    prodv.x = u.y * v.z - u.z * v.y;
    prodv.y = u.z * v.x - u.x * v.z;
    prodv.z = u.x * v.y - u.y * v.x;

    return prodv;
}

coords calcularVetorEntrePontos(coords a, coords b) {
	coords vetor;
	
	vetor.x = b.x - a.x;
	vetor.y = b.y - a.y;
	vetor.z = b.z - a.z;
	
	return vetor;
} 

double calcularNormaVetor(coords v) {
	double norma;
	
	norma = sqrt((v.x * v.x + v.y * v.y + v.z * v.z));
	
	return norma;
}