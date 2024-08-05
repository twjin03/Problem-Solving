/*
이항 계수 1
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int answer; 

    int den = 1; 
    int num = 1;

    int i;

    for (i = n; i >= 1; i--) {
        den *= i;
    }

    for (i = n - k; i >= 1; i--) {
        num *= i;
    }

    for (i = k; i >= 1; i--) {
        num *= i;
    }

    answer = den / num;

    printf("%d", answer);

    return 0;
}