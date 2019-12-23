#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//int * generateSequence(n) {
//    int *array = malloc(n * sizeof(int));
//
//    printf("\n generated array = [");
//
//    for (int i = 0; i < n; ++i) {
//        array[i] = (int)((rand() % 20));
//
//        if (i == n - 1) {
//            printf("%d", array[i]);
//        }
//        else {
//            printf("%d, ", array[i]);
//        }
//    }
//
//    printf("]\n");
//
//    return (int *)array;
//}
//
//float multiply(int sequence[], int n) {
//    float res = 1;
//
//    for (int i = 0; i < n; ++i) {
//        if (sequence[i] == 1 || sequence[i] == 0) continue;
//        res *= (float)pow(sequence[i], 2) / (float)(1 - sequence[i]);
//    }
//
//    return res;
//}
//
//int sum(int sequence[], int len) {
//    int res = 0;
//
//    for (int i = 0; i < len; ++i) {
//        res += sequence[i];
//    }
//    return res;
//}
//
//int factorial(int arg) {
//    if (arg >= 1) {
//        return arg * factorial(arg - 1);
//    } else {
//        return 1;
//    }
//}
//
//int combinations(int n, int m) {
//    return factorial(n) / (factorial(m) * factorial(n - m));
//}
//
//int findMin(int sequence[], int len) {
//    if (len == 0) return 0;
//
//    int min = sequence[0];
//
//    for (int i = 0; i < len; ++i) {
//        if (sequence[i] < min) min = sequence[i];
//    }
//    return min;
//}
//
//// 17
//float sumWithPrecision(double x, double precision) {
//    float res = 1;
//
//    printf('%d', precision / 0.1);
//}

void sum(double eps1, double eps2) {
    double a = 0.054323 / eps1;

    printf("\f", a);
}

void lab3() {
//    int len = 8;

//    int * array = generateSequence(len);
//    int sum_res = sum(array, len);
//    float mult = multiply(array, len);
//    int min = findMin(array, len);

    double eps1 = 0.01;
    double eps2 = 0.0001;

//    printf("1) sum of array is = %d\n", sum_res);
//    printf("2) P = xn^2/(1 - xn) = %f", mult);
//    printf("\n3) combinations of n = 7, m = 5 is %d", combinations(7, 5));
//    printf("\n4) minimal value is: %d", min);

//    sumWithPrecision(0.5, eps1);

//    free(array);

    sum(eps1, eps2);
}






