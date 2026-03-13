/*
007: 1-7. 국, 영, 수 과목 점수를 입력받아 총점과 평균 계산

국어, 영어, 수학 점수를 입력받아 이 점수의 총점과 평균을 계산하여 출력하라.

단, 총점 = 국어점수 + 영어점수 + 수학점수,

평균 = 총점 / 3.0 으로 계산하라.

변수는 다음과 같이 사용하라.

int kor, eng, math; 	// 국어점수, 영어점수, 수학점수 
int total; 			// 총점
float average; 		// 평균점수 

[Input example] : Three integers representing the scores for Korean, English, and Math

85 95 80
[Output example] : Total score and average

total = 260
average = 86.7
*/

#include <stdio.h>

int main(){

    int kor, eng, math; 	// 국어점수, 영어점수, 수학점수 
    int total; 			// 총점
    float average; 		// 평균점수 


    scanf("%d %d %d",&kor,&eng,&math);
    total = kor + eng + math;
    average = total/3.0;
    printf("total = %d",total);
    printf("average = %.1f",average);
    

    return 0;

}