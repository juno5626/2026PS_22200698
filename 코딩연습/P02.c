/*
## P02

BMI 값을 계산한 뒤 다음 기준에 따라 **비만 여부를 출력**하시오.

18.5 미만	저체중
18.5 ~ 23	정상
23 ~ 25	과체중
25 이상	비만

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
    
    printf("bmi : %.1f",bmi);

    if(bmi<18.5){
        printf("저체중");
    }else if(bmi<23&&bmi>=18.5){
        printf("정상");
    }else if(bmi>=23&&bmi<25){
        printf("과체중");
    }else{
        printf("비만");
    }

    
    return 0;
}