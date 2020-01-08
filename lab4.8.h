#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void lab48() {
    int B[10];

    for (int i = 0; i < 10; ++i) {
        B[i] = (int)((rand() % 10));
        printf("%d ", B[i]);
    }

    int res[10];

    for (int j = 0; j < 10; ++j) {
        if (j + 5 < 9) {
            res[j + 6] = B[j];
        } else {
            res[j + 5 - 9] = B[j];
        }
    }

    printf("\n");
    for (int k = 0; k < 10; ++k) {
        printf("%d ", res[k]);
    }
}

