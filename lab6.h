#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int findUntilIncrease(int n) {
    int k = 1;
    int powk = 1;

    while (powk <= n) {
        powk = (int)pow(2, k);
        k++;
    }

    return powk;
}

void lab6() {
    printf("%d", findUntilIncrease(25));
}