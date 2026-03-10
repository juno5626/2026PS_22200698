/*
## P01

bmi = 몸무게(kg) ÷ (키(m) × 키(m))

사용자로부터 **키(cm)와 몸무게(kg)** 를 입력받아 **BMI를 계산하여
출력**하는 프로그램을 작성하시오.
*/

#include <stdio.h>

int main(){
    
    int height, weight;
    float bmi;

    printf("height ? ");
    scanf("%d",&height);
    printf("weight ? ");
    scanf("%d",&weight);


    bmi = weight /((height/100.0)*(height/100.0));

    printf("%.1f",bmi);

    return 0;
}