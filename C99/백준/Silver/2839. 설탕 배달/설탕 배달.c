#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N; // N킬로그램 배달
	scanf("%d", &N);

	int answer = 0; // 봉지의 최소 개수 초기화

	while (1) {
		if (N % 5 == 0) {
			answer += N / 5;
			break;
		}

		N -= 3;
		answer++;
		if (N <= 0) break;
	}

	if (N < 0) printf("-1\n");
	else printf("%d\n", answer);

	return 0;
}