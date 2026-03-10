/*

## P04

5명의 BMI 중 **비만(BMI ≥ 25)인 사람 수**를 출력하시오.

*/

#include <stdio.h>

int main(){
    struct person{
        int height, weight;
        float bmi;
    }  p[5];

    int c=0;

    for(int i = 1; i <=5 ; i++){
        printf("%d person height ? ",i);
        scanf("%d",&p[i-1].height);
        printf("%d person weight ? ",i);
        scanf("%d",&p[i-1].weight);
        p[i-1].bmi = p[i-1].weight /((p[i-1].height/100.0)*(p[i-1].height/100.0));
        if(p[i-1].bmi>=25){
            c++;
        }
    }

    for(int i = 1; i <=5 ; i++){
        printf("person %d bmi : %.1f\n",i,p[i-1].bmi);
    }

    printf("over weight person : %d",c);

    
    return 0;
}