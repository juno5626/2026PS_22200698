/*

## P06

5명의 **평균 BMI**를 계산하여 출력하시오.

*/

#include <stdio.h>

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
        p[i-1].bmi = p[i-1].weight /((p[i-1].height/100.0)*(p[i-1].height/100.0));
        
        sum = sum +  p[i-1].bmi;
    }

    avg = sum/5;
    printf("Bmi average is : %.1f",avg);
    
    return 0;
}