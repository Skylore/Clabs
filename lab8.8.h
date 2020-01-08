#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void lab88() {
    int m[5][5] = {
            {1, 2, 5, 6,  9},
            {3, 6, 2, 4,  7},
            {2, 3, 6, 10, 1},
            {2, 5, 3, 6,  19},
            {1, 6, 2, 10, 4}
        };


    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%d ", m[i][j]);
        }
        int min = m[i][0], x = 0, y = i;

        for (int k = 0; k < 5; ++k) {
            if (m[i][k] < min) {
                min = m[i][k];
                x = i;
                y = k;
            }
        }
        printf("    min: %d (%d; %d)\n", min, x, y);
    }
}