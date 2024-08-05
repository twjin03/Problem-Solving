//수정사항: for문 loop 범위에서 오류 남

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> 
#include <limits.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int* arr = malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int temp = 0;
    int count = 0;
    int max = 0;


    for (int i = N - 1; i >= 0; i--) {
        int maxIdx = i;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[maxIdx]) {
                maxIdx = j;
            }
        }



        if (maxIdx != i) {
            temp = arr[i];

            arr[i] = arr[maxIdx];
            max = arr[maxIdx];
            arr[maxIdx] = temp;


            count++;
        }

        if (count == K)
            break;


    }

    if (count < K) {
        printf("%d", -1);
    }

    else {
        for (int i = 0; i < N; i++) {
            printf("%d ", arr[i]);
        }
    }

    free(arr);

    return 0;
}