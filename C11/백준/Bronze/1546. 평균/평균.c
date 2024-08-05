/*
문제
세준이는 기말고사를 망쳤다. 세준이는 점수를 조작해서 집에 가져가기로 했다. 일단 세준이는 자기 점수 중에 최댓값을 골랐다. 이 값을 M이라고 한다. 
그리고 나서 모든 점수를 점수/M*100으로 고쳤다.

예를 들어, 세준이의 최고점이 70이고, 수학점수가 50이었으면 수학점수는 50/70*100이 되어 71.43점이 된다.

세준이의 성적을 위의 방법대로 새로 계산했을 때, 새로운 평균을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 시험 본 과목의 개수 N이 주어진다. 이 값은 1000보다 작거나 같다. 둘째 줄에 세준이의 현재 성적이 주어진다. 이 값은 100보다 작거나 같은 음이 아닌 정수이고, 
적어도 하나의 값은 0보다 크다.

출력
첫째 줄에 새로운 평균을 출력한다. 실제 정답과 출력값의 절대오차 또는 상대오차가 10-2 이하이면 정답이다.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n; //시험 본 과목의 개수 n<= 1000
    scanf("%d", &n);

    int* gradeArr = malloc(sizeof(int) * n); // 세준이의 현재 성적 

    for (int i = 0; i < n; i++) {
        scanf("%d", &gradeArr[i]);
    }

    int max = gradeArr[0]; //세준이 점수 중 최댓값 초기화

    for (int i = 0; i < n; i++) { //최댓값 구하기 
        if (gradeArr[i] > max) {
            max = gradeArr[i];
        }
    }

    float sum = 0;
    
    float * newgrade = malloc(sizeof(float) * n);

    for (int i = 0; i < n; i++) {
        newgrade[i] = (gradeArr[i] / (float)max * 100);
    }
    for (int i = 0; i < n; i++) {
        sum += newgrade[i];
    }

    printf("%f", sum / n);
    



    free(gradeArr);
    free(newgrade);
  
    return 0;
}
