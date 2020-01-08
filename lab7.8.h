#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void lab78() {
    int n = 10;
    double a[10] = {5, 1, 1.4, 4, 1.7, 1.8, 5, 9, 1.9};

    int count = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] >= 1 && a[i] <= 2) {
            a[i] = 1;
            count++;
        }

        printf("%d ", (int)a[i]);
    }

    printf("\n%d", count);
}