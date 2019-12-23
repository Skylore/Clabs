#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void printQ(int n) {

    int q = 1;

    while (q < 1000) {
        if (n % q == 0 && (n % (int)pow(q, 3)) != 0) {
            printf("%d\n", q);
        }

        q++;
    }
}

void lab7() {
    printQ(13);
}