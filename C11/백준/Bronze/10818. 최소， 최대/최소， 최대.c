#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n; 
    scanf("%d", &n);
    int* arr = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0]; 

    for (int i = 0; i < n; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    printf("%d %d", min, max);

    free(arr);
    return 0;
}