#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//덩치 
//키, 몸무게 
//몸무게 x, 키 y 
//(x, y) 
//몸무게, 키 모두 클 때 덩치가 크다고 함 
// 
//크기 정할 수 없는 경우 
//둘 중 하나만 숫자가 큰 경우 

//등수 = 자신보다 더 큰 덩치의 사람의 수 + 1



int main() {
    int n; 
    scanf("%d", &n);

    int x[50] = { 0 };
    int y[50] = { 0 };
    int i = 0;


    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    int rankArr[50];
    for (i = 0; i < n; i++) {
        rankArr[i] = 1;
    }

    for (i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if ((x[i] < x[j]) && (y[i] < y[j])) {
                    rankArr[i]++;
                }
            }
        }
    }


    for (int i = 0; i < n; i++) {
        printf("%d ", rankArr[i]);
    }
    return 0;
}
