#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> 

int main() {
    int N; 
    scanf("%d", &N);
    int* arr;

    arr = (int*)malloc(sizeof(int) * N);

    int k = 1;
    for (int i = 0; i < N; i++) {
        arr[i] = k;
        k++;
    }
    for (int i = 0; i < N; i++) {
        printf("%d\n", arr[i]);
    }

    free(arr);
    return 0;
}