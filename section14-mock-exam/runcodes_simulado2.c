#include <stdio.h>

int main() {
    int a, b, c, d, e, f, det, det_x, det_y;
    double x, y;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &f);

    det = a * e - b * d;
    det_x = c * e - b * f;
    det_y = a * f - c * d;

    if (det == 0) {
        if ((det_x == 0) && (det_y == 0)) {
            printf("infinitas solucoes\n");
        } else {
            printf("sem solucao\n");
        }
    } else {
        x = (double)det_x / det;
        y = (double)det_y / det;
        printf("%.2lf %.2lf\n", x, y);
    }

    return 0;
}