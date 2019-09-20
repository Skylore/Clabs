#include <stdio.h>
#include <math.h>

void lab2() {
    double a = 0.7, dx = 0.1, x1 = 0, x2 = 8.2;
    double x, y = 0, y1, dy = 0, ymin = 0, ymax = 0;

    x = x1 - dx;
    while (x < x2) {
        x += dx;
        x = round(x * 100) / 100;

        y1 = y;

        if (x >= 1) {
            y = a * log10(x) + pow(fabs(x), 1/3);
        } else if (x < 1) {
            y = 2*a*cos(x) + 3*pow(x, 2);
        } else {
            printf("ERROR");
        }

        dy = ((y - y1) + dy) / 2;

        if (ymin == 0 && ymax == 0) {
            ymin = ymax = y;
        }

        y <= ymin ? ymin = y : 0;
        y >= ymax ? ymax = y : 0;

    }

    printf("y = [ %f ; %f ]\ndy = %f", ymin, ymax, dy);


}