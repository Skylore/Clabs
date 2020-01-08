#include <stdio.h>
#include <math.h>

void lab1() {
    double x, y, a = 0.3, b = 0.9, c = 0.61;

    x = (pow(a, 2*c) + pow(b, -c)*cos(a + b)) / (c + 1);
    y = sqrt(pow(c, 2) + b) - pow(b, 2) * pow(sin((c + a) / c), 3)

    printf("x = %f,\ny = %f", x, y);
}