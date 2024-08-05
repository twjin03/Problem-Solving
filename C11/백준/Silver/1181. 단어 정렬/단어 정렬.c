#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    int length; 
    char text[51];
}word;

int cmp(const void* a, const void* b) {
    word A = *(word*)a;
    word B = *(word*)b;

    if (A.length > B.length) {
        return 1;
    }
    else if (A.length < B.length) {
        return -1;
    }
    return strcmp(A.text, B.text);
}
int main() {
    //단어의 개수 n 

    int n = 0; 
    scanf("%d", &n);

    word* arr = malloc(sizeof(word) * n);

    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i].text);

        arr[i].length = strlen(arr[i].text);
    }

    qsort(arr, n, sizeof(word), cmp);

    printf("%s\n", arr[0].text);
    for (int i = 1; i < n; i++) {
        if (strcmp(arr[i - 1].text, arr[i].text)) {
            printf("%s\n", arr[i].text);
        }
    }


    return 0;
}