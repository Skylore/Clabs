#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int * generateSequence(n) {
    int *array = malloc(n * sizeof(int));

    printf("0) generated array = [");

    for (int i = 0; i < n; ++i) {
        array[i] = (int)((rand() % 20));

        if (i == n - 1) {
            printf("%d", array[i]);
        }
        else {
            printf("%d, ", array[i]);
        }
    }

    printf("]\n");

    return (int *)array;
}

float multiply(int sequence[], int n) {
    float res = 1;

    for (int i = 0; i < n; ++i) {
        if (sequence[i] == 1 || sequence[i] == 0) continue;
        res *= (float)pow(sequence[i], 2) / (float)(1 - sequence[i]);
    }

    return res;
}

int sum(int sequence[], int len) {
    int res = 0;

    for (int i = 0; i < len; ++i) {
        res += sequence[i];
    }
    return res;
}

int factorial(int arg) {
    if (arg >= 1) {
        return arg * factorial(arg - 1);
    } else {
        return 1;
    }
}

int combinations(int n, int m) {
    return factorial(n) / (factorial(m) * factorial(n - m));
}

int findMin(int sequence[], int len) {
    if (len == 0) return 0;

    int min = sequence[0];

    for (int i = 0; i < len; ++i) {
        if (sequence[i] < min) min = sequence[i];
    }
    return min;
}

float sumWithPrecision(int sequence[]) {

}

void lab3() {
    int len = 8;

    int * array = generateSequence(len);
    int sum_res = sum(array, len);
    float mult = multiply(array, len);
    int min = findMin(array, len);

    printf("1) sum of array is = %d\n", sum_res);
    printf("2) P = xn^2/(1 - xn) = %f", mult);
    printf("\n3) combinations of n = 7, m = 5 is %d", combinations(7, 5));
    printf("\n4) minimal value is: %d", min);


}




