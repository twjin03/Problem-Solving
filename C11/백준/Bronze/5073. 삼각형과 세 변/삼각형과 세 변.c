#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int isTri(int a, int b, int c) {
    int maxLength = max(a, b, c);
    if (maxLength == a)
        return (b + c > a) ? 1 : 0;
    else if (maxLength == b)
        return (a + c > b) ? 1 : 0;
    else
        return (a + b > c) ? 1 : 0;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    while (a != 0 && b != 0 && c != 0) {
        if (isTri(a, b, c)) {
            if (a == b && b == c)
                printf("Equilateral\n");
            else if (a == b || b == c || a == c)
                printf("Isosceles\n");
            else
                printf("Scalene\n");
        }
        else {
            printf("Invalid\n");
        }

        scanf("%d %d %d", &a, &b, &c);
    }

    return 0;
}
