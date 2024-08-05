#include <stdio.h>
int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    
    double c;
    c = a / b;
    printf("%.30lf", c);
    return 0;
}
