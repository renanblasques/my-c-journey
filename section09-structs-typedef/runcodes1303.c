#include <stdio.h>
#include <string.h>

int main() {
    struct car_data {
        char manufacturer[21];
        char model[21];
        int year;
        char color[21];
        double price;
    };
    int n, cheapestId;
    double cheapestPrice;

    scanf("%d", &n);

    struct car_data car[n];

    for (int i = 0; i < n; i++) {
        scanf("%s", car[i].manufacturer);
        scanf("%s", car[i].model);
        scanf("%d", &car[i].year);
        scanf("%s", car[i].color);
        scanf("%lf", &car[i].price);
    }

    cheapestId = 0;
    cheapestPrice = car[0].price;

    for (int i = 0; i < n; i++) {
        if (car[i].price < cheapestPrice) {
            cheapestPrice = car[i].price;
            cheapestId = i;
        }
    }

    printf("%s\n", car[cheapestId].model);

    return 0;
}