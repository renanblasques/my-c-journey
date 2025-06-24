#include <stdio.h>
#include <math.h>

int main() {
    int flag = 1, mode, operation;
    double a, b;

    while (flag) {
        scanf("%d", &mode);
        if (mode == 0) {
            flag = 0;
        } else if (mode == 1) {
            scanf("%d", &operation);
            switch (operation) {
                case 1:
                    scanf("%lf", &a);
                    scanf("%lf", &b);
                    printf("%.2lf\n", a + b);
                    break;
                case 2:
                    scanf("%lf", &a);
                    scanf("%lf", &b);
                    printf("%.2lf\n", a - b);
                    break;
                case 3:
                    scanf("%lf", &a);
                    scanf("%lf", &b);
                    printf("%.2lf\n", a * b);
                    break;
                case 4:
                    scanf("%lf", &a);
                    scanf("%lf", &b);
                    if (b != 0) {
                        printf("%.2lf\n", a / b);
                    } else {
                        printf("Erro\n");
                    }
                    break;
            }
        } else if (mode == 2) {
            scanf("%d", &operation);
            switch (operation) {
                case 1:
                    scanf("%lf", &a);
                    scanf("%lf", &b);
                    printf("%.2lf\n", pow(a, b));
                    break;
                case 2:
                    scanf("%lf", &a);
                    if (a >= 0) {
                        printf("%.2lf\n", sqrt(a));
                    } else {
                        printf("Erro\n");
                    }
                    break;
                case 3:
                    scanf("%lf", &a);
                    if (a > 0) {
                        printf("%.2lf\n", log(a));
                    } else {
                        printf("Erro\n");
                    }
                    break;
            }
        }
    }

    return 0;
}