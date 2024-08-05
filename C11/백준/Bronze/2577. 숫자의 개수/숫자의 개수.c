#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 0; 
    int b = 0; 
    int c = 0;

    int* arr = malloc(sizeof(int) * 10);
    for (int i = 0; i < 10; i++) {
        arr[i] = 0;
    }

    scanf("%d" , &a);
    scanf("%d" , &b);
    scanf("%d" , &c);

    int mul = a * b * c;



    int i = 0;
    int temp = 0;
    while (mul != 0) { //조건 맞나?
        temp = mul % 10;
        arr[temp] += 1;
        mul /= 10;
    }

  
     

    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
 

    free(arr);

    return 0;
}
