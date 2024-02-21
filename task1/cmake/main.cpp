#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <malloc.h>

#define M_PI 3.14159265358979323846 //Pi
#define SIZE_ARR 10000000
#ifdef ALOHA
    #define STYPE double
#else 
    #define STYPE float
#endif

int main() {
    STYPE* arr = (STYPE*)malloc(sizeof(STYPE) * SIZE_ARR + 1);
    STYPE sum = 0;

    STYPE delt = (2 * M_PI) / (SIZE_ARR);
    for (int i = 0; i < SIZE_ARR; i++){
        STYPE x = i * delt;
        arr[i] = sin(x);
        sum += arr[i];
    }

    printf("sum -> %f\ntype-> %ld\n", sum, sizeof(sum));

    free(arr);
    return 0;
}
