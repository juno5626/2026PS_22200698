/*
## P03

5명의 키와 몸무게를 입력받아 **각 사람의 BMI를 출력**하시오.

조건\
- 반복문 사용
*/

#include <stdio.h>

int main(){
    struct person{
        int height, weight;
        float bmi;
    }  p[5];

    for(int i = 1; i <=5 ; i++){
        printf("%d person height ? ",i);
        scanf("%d",&p[i-1].height);
        printf("%d person weight ? ",i);
        scanf("%d",&p[i-1].weight);
        p[i-1].bmi = p[i-1].weight /((p[i-1].height/100.0)*(p[i-1].height/100.0));

    }

    for(int i = 1; i <=5 ; i++){
        printf("%d person bmi : %.1f\n",i,p[i-1].bmi);
    }

    
    return 0;
}