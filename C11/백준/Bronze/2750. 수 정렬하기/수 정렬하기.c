

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> 

int main() {
    int N; 
    scanf("%d", &N);

    int* arr = malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int temp = 0; 
    for (int i = 0; i < N-1; i++) {
        for (int j = i+1; j < N; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}