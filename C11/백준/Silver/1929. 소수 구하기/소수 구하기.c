#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    for (int i = m; i <= n; i++) {
        if (is_prime(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
