#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N = 0;
    scanf("%d", &N);

  
    char* arr = malloc(sizeof(char) * (N + 1));  
    for (int i = 0; i < N; i++) {
        scanf(" %c", &arr[i]); 
    }
    arr[N] = '\0'; 

    int sum = 0;
    int temp = 0;

    for (int i = 0; i < N; i++) {
        temp = arr[i] - '0';
        sum += temp;
    }
    printf("%d", sum);


    free(arr);

    return 0;
}
