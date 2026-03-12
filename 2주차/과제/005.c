/*
005: 1-5. 아파트의 제곱미터 수치를 평형으로 바꾸기

아파트의 분양 면적을 제곱미터(m2) 단위로 입력받아 이 값을 평형 단위의 값으로 변환하여 출력하라.

단, 평형 수 = 제곱미터 / 3.305 로 계산한다.

변수는 다음과 같이 사용하라.

float m2_area; 		// 면적 (제곱미터)  
float pyung_area; 	// 면적 (평수) 

[Input example] #1: A floating-point number representing the area of the apartment in square meters

105.5
[Output example]#1: A floating-point number representing the area of the apartment in pyung

31.9
*/

#include <stdio.h>

int main(){
    float m2_area; 		// 면적 (제곱미터)  
    float pyung_area; 	// 면적 (평수) 

    scanf("%f",&m2_area);
    pyung_area = m2_area/3.305;
    printf("%f",pyung_area);

    return 0;
}