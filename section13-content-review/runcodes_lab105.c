#include <stdio.h>
#include <stdlib.h>
//#include "avaliador.h"

int main() {
    FILE *input_file, *output_file;
    char input_file_name[101], buffer[101];

    scanf("%s", input_file_name);
    input_file = fopen(input_file_name, "r");
    output_file = fopen("runcodes_lab105_out.csv", "w");
//    output_file = fopen("notas_convertido.csv", "w");

    if ((input_file == NULL)) {
        printf("Erro ao abrir arquivo para leitura\n");
        return 1;
    }
    if ((output_file == NULL)) {
        printf("Erro ao abrir arquivo para escrita\n");
        return 1;
    }

    while (feof(input_file) == 0) {
        fscanf(input_file, "%s\n", buffer);
        for (int i = 0; buffer[i] != '\0'; i++) {
            if (buffer[i] == ',') {
                buffer[i] = ';';
            }
            if (buffer[i] == '.') {
                buffer[i] = ',';
            }
        }
        fprintf(output_file, "%s\n", buffer);
    }

    fclose(input_file);
    fclose(output_file);

//    arquivo_finalizado("notas_convertido.csv");

    return 0;
}