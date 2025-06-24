#include <stdio.h>

void findAndCount(int i, int vector[], int evenVector[], int oddVector[], int *countEven, int *countOdds);

int main() {
    int aVector[20], bVector[20], cVector[20];
    int numberOfEven, numberOfOdds, i;
    numberOfEven = numberOfOdds = i = 0;
    for (i = 0; i < 20; i++) {
        scanf("%d", &aVector[i]);
    }
    findAndCount(i, aVector, bVector, cVector, &numberOfEven, &numberOfOdds);

    printf("%d ", numberOfEven);
    for (int j = 0; j < numberOfEven; j++) {
        printf("%d ", bVector[j]);
    }

    printf("\n%d ", numberOfOdds);
    for (int j = 0; j < numberOfOdds; j++) {
        printf("%d ", cVector[j]);
    }
    printf("\n");

    return 0;
}

void findAndCount(int vectorLenght, int vector[], int evenVector[], int oddVector[], int *countEven, int *countOdds) {
    *countEven = 0;
    *countOdds = 0;
    for (int j = 0; j < vectorLenght; j++) {
        if (vector[j] % 2 == 0) {
            evenVector[*countEven] = vector[j];
            (*countEven)++;
        } else {
            oddVector[*countOdds] = vector[j];
            (*countOdds)++;
        }
    }
}