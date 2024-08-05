#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int countWord(char* str) {
    int count = 0; 
    int isWord = 0; 

    while (*str) {
        if (*str == ' ' || *str == '\t' || *str == '\n') {
            isWord = 0; 
        }

        else {
            if (isWord == 0) {
                isWord = 1; 
                count++;
            }
        }
        str++; 
    }
    return count; 
}

int main() {
    char str[1000001];
    fgets(str, sizeof(str), stdin);


    int output = countWord(str);
    printf("%d\n", output);

    return 0;
}
