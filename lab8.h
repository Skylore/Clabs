#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void genMatrix(size_t rows, size_t cols) {
    int **m = malloc(sizeof *m * rows );
    int counter = 1;

    if (m) {
        for (size_t i = 0; i < rows; ++i) {
            m[i] = malloc(sizeof *m[i] * cols);

            for (int j = 0; j < cols; ++j) {
                m[i][j] = counter++;
                printf("%d ", m[i][j]);
            }

            printf("\n ");
        }
    }
}

void lab8() {

    int n = 6;

    genMatrix(n, n);
}