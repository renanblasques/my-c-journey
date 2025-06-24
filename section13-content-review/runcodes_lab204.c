#include <stdio.h>
#include <string.h>

typedef struct {
    char name[51];
    char species[51];
    char service[51];
    int age;
    char date[15];
    char time[10];
} appointment;

void printAppointment(appointment pet);

int main() {
    FILE *file;
    char pet_name[51], file_name[101];
    int found = 0;
    appointment pet;

    scanf("%s", file_name);
    scanf(" %[^\n]", pet_name);

    pet_name[strcspn(pet_name, "\r\n")] = '\0';

    file = fopen(file_name, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo de agendamento.\n");
    }

    while (!feof(file)) {
        fscanf(file, "%50[^;];%30[^;];%d;%30[^;];%14[^;];%9[^\n]\n", 
            pet.name, pet.species, &pet.age, pet.service, pet.date, pet.time);
        if (strcmp(pet.name, pet_name) == 0) {
            printAppointment(pet);
            found = 1;
        }
    }

    if (!found) {
        printf("Nenhum agendamento encontrado para o pet informado.\n");
    }

    fclose(file);

    return 0;
}

void printAppointment(appointment pet) {
    printf("Nome: %s\n", pet.name);
    printf("Especie: %s\n", pet.species);
    printf("Idade: %d anos\n", pet.age);
    printf("Serviço: %s\n", pet.service);
    printf("Data agendada: %s\n", pet.date);
    printf("Hora agendada: %s\n", pet.time);
}