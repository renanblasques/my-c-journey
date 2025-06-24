#include <stdio.h>
#include <stdlib.h>

int main() {
    int track_lenght, distance_one = 0, distance_two = 0;
    scanf("%d", &track_lenght);

    char *track = (char *)calloc((track_lenght + 1), sizeof(int));
    scanf("%s", track);

    char *robot_one = (char *)calloc(1001, sizeof(char));
    char *robot_two = (char *)calloc(1001, sizeof(char));

    scanf("%s", robot_one);
    scanf("%s", robot_two);

    for (int i = 0; robot_one[i] != '\0'; i++) {
        if ((track[distance_one] == '.') && (robot_one[i] == 'A') && (distance_one < track_lenght)) {
            distance_one++;
        } else if ((track[distance_one] == '#') && (robot_one[i] == 'P') && (distance_one < track_lenght)) {
            distance_one++;
        }
    }
    for (int i = 0; robot_two[i] != '\0'; i++) {
        if ((track[distance_two] == '.') && (robot_two[i] == 'A') && (distance_two < track_lenght)) {
            distance_two++;
        } else if ((track[distance_two] == '#') && (robot_two[i] == 'P') && (distance_two < track_lenght)) {
            distance_two++;
        }
    }

    distance_one--;
    distance_two--;

    if (distance_one > distance_two) {
        printf("%d\n", 1);
    } else if (distance_one < distance_two) {
        printf("%d\n", 2);
    } else {
        printf("%d\n", 0);
    }

    free(track);
    free(robot_one);
    free(robot_two);

    return 0;
}