#include <stdio.h>
#include <math.h>

void lab2() {
    double a = 2.1, b = 1.8, dx = 1, x1 = 0, x2 = 12;
    double x, y = 0, y1, dy = 0, ymin = 0, ymax = 0;

    x = x1 - dx;

    while (x < x2) {
        x += dx;
        x = round(x * 100) / 100;

        y1 = y;

        if (x < 4) {
            y = (a / x) + b * pow(x, 2);
        } else if (x >= 4 && x <= 6) {
            y = x;
        } else {
            y = a * x + b * pow(x, 3);
        }

        dy = ((y - y1) + dy) / 2;

        if (ymin == 0 && ymax == 0) {
            ymin = ymax = y;
        }

        y <= ymin ? ymin = y : 0;
        y >= ymax ? ymax = y : 0;

        printf("%f - %f \n", x, y);

    }

    printf("y = [ %f ; %f ]\ndy = %f", ymin, ymax, dy);


}