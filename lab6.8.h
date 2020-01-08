#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void lab68() {
    int n = 8;
    int x = 4;
    double res = 0;

    for (int i = 1; i <= n; ++i) {
        res += pow(sin(x), i);
    }

    printf("n: %d , x: %d ,res: %f", n, x, res);
}