#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char discipina[51];
    double nota;
    double freq;
} disciplina;

int main() {
    FILE *file;
    char file_name[101];
    disciplina disc[1001];
    int i = 0, j = 0, cont = 0;
    double cr = 0;

    scanf("%s", file_name);

    char nome_pior_disc[500], nome_melhor_disc[500];
    double nota_pior_disc, nota_melhor_disc;

    file = fopen(file_name, "r");

    char nome[51];
    double nota, freq;

    while (fscanf(file, "%50[^,],%lf,%lf\n", nome, &nota, &freq) == 3) {
        strcpy(disc[i].discipina, nome);
        disc[i].nota = nota;
        disc[i].freq = freq;
        i++;
    }

    nota_melhor_disc = disc[0].nota;
    nota_pior_disc = disc[0].nota;
    strcpy(nome_melhor_disc, disc[0].discipina);
    strcpy(nome_pior_disc, disc[0].discipina);

    for (j = 0; j < i; j++) {
        if (disc[j].freq >= 75.0) {
            cr = cr + disc[j].nota;
            cont++;
        }
        if (disc[j].nota < nota_pior_disc) {
            nota_pior_disc = disc[j].nota;
            strcpy(nome_pior_disc, disc[j].discipina);
        }
        if (disc[j].nota > nota_melhor_disc) {
            nota_melhor_disc = disc[j].nota;
            strcpy(nome_melhor_disc, disc[j].discipina);
        }
    }

    if (cont != 0) {
        cr = cr / cont;
    } else {
        cr = 0;
    }

    printf("Coeficiente de Rendimento: %.2lf\n", cr);
    printf("Melhor Disciplina: %s (nota %.2lf)\n", nome_melhor_disc, nota_melhor_disc);
    printf("Pior Disciplina: %s (nota %.2lf)\n", nome_pior_disc, nota_pior_disc);
    printf("Disciplinas com frequencia inferior a 75%%:\n");

    for (j = 0; j < i; j++) {
        if (disc[j].freq < 75.0) {
            printf("- %s (frequencia %.2lf)\n", disc[j].discipina, disc[j].freq);
        }
    }

    fclose(file);
    return 0;
}
