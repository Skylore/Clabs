#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void findMax(int n, int ar[n][n]) {
    if (n == 0) {
        return;
    }

    int max = ar[0][0];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (ar[i][j] > max) {
                max = ar[i][j];
            }
        }
    }

    printf("Max is: %d \n", max);
}

void printMaxInFiltered(int rows, int cols, int matrix[rows][cols]) {
    printf("\nsorted rows: \n");

    for (int i = 0; i < rows; ++i) {

        int * row = matrix[i];
        bool isSorted = true;

        for (int j = 1; j < cols; ++j) {
            if (row[j - 1] > row[j]) {
                isSorted = false;
            }
        }

        if (isSorted) {
            for (int j = 0; j < cols; ++j) {
                printf("%d ", row[j]);
            }

            printf(" Max is: %d\n", row[cols - 1]);
        }
    }
}



void lab5() {
    int matrix[4][4] = {
            {1, 2, 5, 6},
            {3, 6, 2, 4},
            {2, 3 ,6, 10},
            {2, 5, 3, 6}
    };

    printMatrix(4, 4, matrix);

    printMaxInFiltered(4, 4, matrix);

    findMax(4, matrix);
}
