#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
    char* arr = malloc(sizeof(char) * 100);
    scanf("%s", arr);

    int p = 0;

    int temp = 0;

    int* ptarr = malloc(sizeof(int) * 26);
    for (int i = 0; i < 26; i++) {
        ptarr[i] = -1;
    }
   

    for (int j = 0; arr[j] != 0; j++) {
        char current = arr[j];
        if (current >= 'a' && current <= 'z') {
            int index = current - 'a';
            if (ptarr[index] == -1) {
                ptarr[index] = j;
            }
        }
        
    }
     

    for (int i = 0; i < 26; i++) {
        printf("%d ", ptarr[i]);
    }
 

    free(arr);
    free(ptarr);

    return 0;
}
