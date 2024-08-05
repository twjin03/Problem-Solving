#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;
    scanf("%d", &n);

    int tmp = n;
    int cycle = 0; 

    
    while (1) {
        int ten = tmp / 10;
        int one = tmp % 10;
        int sum = one + ten;

        tmp = one * 10 + sum % 10;
        cycle++;
        if (tmp == n) break;
    }
    printf("%d", cycle);
    
    
    return 0;
}