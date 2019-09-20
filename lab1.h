#include <stdio.h>
#include <math.h>

void lab1() {
    double x, y, a = -0.5, b = 1.7, t = 0.44;

    x = (exp(-b * t))*sin(a*t+b)-sqrt(fabs(b*t + a));
    y = b*sin(a*pow(t, 2)*cos(2*t)) - 1;

    printf("x = %f,\ny = %f", x, y);
}