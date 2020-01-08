#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printm(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void lab58() {
    int m[4][4] = {
            {1, 2, 5, 6},
            {3, 6, 2, 4},
            {2, 3 ,6, 10},
            {2, 5, 3, 6}
    };

    int k = 2;
    int l = 2;

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (i == k && j != l) {
                m[k][j] = 0;
            }
            if (j == l && i != k) {
                m[i][l] = 0;
            }
        }
    }

    printm(4, 4, m);


}
