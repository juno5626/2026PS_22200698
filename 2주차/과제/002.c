/*
002
신장(cm 단위)과 체중(kg 단위)를 입력받은 후, 비만도(BMI)를 계산하여 출력하라.

비만도 수치 = 체중(kg) / (신장(m)의 제곱) 으로 계산한다.

이 때, 신장은 미터 단위로 환산해야 하므로 입력받는 수치(cm 단위)에 0.01을 곱해 m 단위로 바꾸어 계산하라.

변수는 다음과 같이 사용하라.

int height, weight; // 신장(cm), 체중(kg) 
float bmi; // 비만도 수치 
*/

#include <stdio.h>

int main(){
    int birth_year; // 태어난 년도 
    int age; // 나이 

    scanf("%d",&birth_year);
    age = 2026-birth_year;

    printf("%d",age);

    return 0;
}