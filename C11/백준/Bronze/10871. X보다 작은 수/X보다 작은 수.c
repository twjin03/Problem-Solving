#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> 

int main() {
    int N, X;
    scanf("%d %d", &N, &X);

    int* arr = (int*)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int* ansArr = (int*)malloc(N * sizeof(int)); 

    int k = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] < X) { 
            ansArr[k] = arr[i];
            k++; 
        }
    }
    for (int i = 0; i < k; i++) { 
        printf("%d ", ansArr[i]);
    }

    free(arr); 
    free(ansArr);

    return 0;
}
