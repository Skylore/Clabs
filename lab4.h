#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void findMaxx(int ar[], int n) {
    if (n == 0) {
        return;
    }

    int max = ar[0];

    for (int i = 0; i < n; ++i) {
        if (max < ar[i]) {
            max = ar[i];
        }
    }

    printf("\nMax is: %d \n", max);
}

int **generateMatrix(size_t rows, size_t cols) {
    int **m = malloc(sizeof *m * rows );

    if (m) {
        for (size_t i = 0; i < rows; ++i) {
            m[i] = malloc(sizeof *m[i] * cols);
        }
    }

    return m;
}

void **fillMatrix(int rows, int cols, int **matrix[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = (int)((rand() % 10));
            printf("\t%d", (int)matrix[i][j]);
        }
        printf("\n");
    }
}

void findPowsOfTwo(int rows, int cols, int **matrix[rows][cols]) {
    printf("\n\n#1\nPows of two: { ");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (log10((int)matrix[i][j])/log10(2) == round(log10((int)matrix[i][j])/log10(2))) {
                printf("%d ", (int)matrix[i][j]);
            }
        }
    }
    printf("}");
}

void swapMinMax(int rows, int cols, int **matrix[rows][cols]) {
    printf("\n\n#2");
    int imin = 0, imax = 0, jmin = 0, jmax = 0, min = matrix[0][0], max = matrix[0][0];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                imax = i;
                jmax = j;
            }
            if (matrix[i][j] < min) {
                min = matrix[i][j];
                imin = i;
                jmin = j;
            }
        }
    }

    printf("\nMin value is: %d (%d, %d)\nMin value is: %d (%d, %d)\n\n", min, imin, jmin, max, imax, jmax);
}

void sumOfTree(int rows, int cols, int **matrix[rows][cols]) {
    int sum = 0;

    printf("#3\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if ((int)matrix[i][j] % 3 == 0) {
                printf("%d ", (int)matrix[i][j]);
                sum += (int)matrix[i][j];
            }
        }
    }

    printf("\nsum is: %d", sum);
}

void printPowsOfIndexes(int rows, int cols, int **matrix[rows][cols]) {
    printf("\n\n#4");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if ((i != 0 && sqrt(i) == round(sqrt(i)) && (j != 0 && sqrt(j) == round(sqrt(j))))) {
                printf("\n( %d, %d ) = %d", i, j, (int)matrix[i][j] );
            }
        }
    }
}

void maxInReverse(int sequence[], int n) {
    int *array = malloc(5 * sizeof(int));
    for (int i = 0; i < n - i; ++i) {
        printf("%d ", (sequence[i] + sequence[n - i - 1]));
        array[i] = (sequence[i] + sequence[n - i - 1]);
    }

    findMaxx(array, 10);
}


void lab4() {
    int rows = 5;
    int cols = 5;
    int ** matrix = generateMatrix(rows, cols);



    fillMatrix(rows, cols,  matrix);
    findPowsOfTwo(rows, cols,  matrix);
    swapMinMax(rows, cols,  matrix);
    sumOfTree(rows, cols,  matrix);
    printPowsOfIndexes(rows, cols,  matrix);

//    int * seq = generateSequence(10);
//    maxInReverse(seq, 10);



    free(matrix);
}