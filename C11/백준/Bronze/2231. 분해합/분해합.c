#define _CRT_SECURE_NO_WARNINGS
/*
어떤 자연수 N이 있을 때, 그 자연수 N의 분해합은
N과 N을 이루는 각 자리수의 합을 의미한다.
어떤 자연수 M의 분해합이 N인 경우, M을 N의 생성자라 한다. 
예를 들어, 245의 분해합은 256(=245+2+4+5)이 된다. 
따라서 245는 256의 생성자가 된다.
물론, 어떤 자연수의 경우에는 생성자가 없을 수도 있다. 
반대로, 생성자가 여러 개인 자연수도 있을 수 있다.

자연수 N이 주어졌을 때, N의 가장 작은 생성자를 구해내는 프로그램을 
작성하시오.
*/

//분해합 최대 1000000
//생성자는 최대 6자리 수 
//만약 생성자가 999999이라면 
//분해합은 999999 + 54 
//분해합과 생성자는 최대 54 차이 남 

//분해합 n이 주어지면, n-54 ~ n-1 범위에서 살펴보기 

#include <stdio.h>
//#include <stdbool.h>


int result(int n) {
    for (int i = n - 54; i < n; i++) {
        int a = 0; 
        int tmp = i; 
        int ans = i;
        while (tmp >= 10) {
            a = tmp % 10;
            tmp = tmp / 10;
            ans += a;
        }
        ans += tmp;

        if (ans == n) {
            int result = i;
            return result; 
        }
    }
    return 0; 
}


int main() {
    int n;
    scanf("%d", &n);

    int answer = result(n);
    printf("%d", answer);

    return 0;
}
