/*

다음 역할을 하는 함수를 작성하시오.

    float eval_bmi(int height, int weight)

기능\
- BMI 계산\
- BMI 반환

*/

#include <stdio.h>

float eval_bmi(int height, int weight);

int main(){
    struct person{
        int height, weight;
        float bmi;
    }  p[5];

    int c=0;
    int num;
    float sum = 0, avg = 0;

    for(int i = 1; i <=5 ; i++){
        printf("%d person height ? ",i);
        scanf("%d",&p[i-1].height);
        printf("%d person weight ? ",i);
        scanf("%d",&p[i-1].weight);
        p[i-1].bmi = eval_bmi(p[i-1].height,p[i-1].weight);     
        sum = sum +  p[i-1].bmi;
    }

    avg = sum/5;
    printf("Bmi average is : %.1f",avg);
    
    return 0;
}

float eval_bmi(int height, int weight){
    float bmi;
    bmi = weight /((height/100.0)*(height/100.0));

    return bmi;
}
