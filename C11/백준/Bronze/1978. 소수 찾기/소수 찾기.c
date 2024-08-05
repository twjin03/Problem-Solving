#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n;
    scanf("%d", &n);

    int arr[100] = { 0 };
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            continue;
        }
        int isPrime = 1; 
        for (int j = 2; j < arr[i]; j++) {
            if (arr[i] % j == 0) {
                isPrime = 0; 
                break;
            }
        }
        if (isPrime) { 
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}