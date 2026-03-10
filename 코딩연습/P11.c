/*

## P11

다음 역할을 하는 함수를 작성하시오.

    float bmi_input(float *h, float *w)

기능

1.  입력받기\
2.  BMI 계산\
3.  BMI 반환

*/

#include <stdio.h>

struct person{
        float height, weight;
        int num;
        float bmi;
    };

float eval_bmi(float height, float weight);
int bmi_level(float bmi);
float bmi_input(float *h, float *w);

int main(){
    struct person p[5];

    for(int i = 1; i <=5 ; i++){
        printf("%d person height, weight ? ",i);
        p[i-1].bmi = bmi_input(&p[i-1].height,&p[i-1].weight);
        p[i-1].num = bmi_level(p[i-1].bmi);
    }
    for(int i = 0 ; i < 5 ; i++){
        printf("person %d bmi : %.1f (",i+1,p[i].bmi);
        switch(p[i].num){
            case 1:
                printf("저체중");
                break;
            case 2:
                printf("정상");
                break;
            case 3:
                printf("과체중");
                break;
            case 4:
                printf("비만");
                break;
        }
        printf(")\n");
        
    }
    
    return 0;
}

float eval_bmi(float height, float weight){
    float bmi;
    bmi = weight /((height/100.0)*(height/100.0));

    return bmi;
}

int bmi_level(float bmi){
    
    if(bmi<18.5){
        return 1;
    }else if(bmi<23&&bmi>=18.5){
        return 2;
    }else if(bmi>=23&&bmi<25){
        return 3;
    }else{
        return 4;
    }

}

float bmi_input(float *h, float *w){
    scanf("%f",h);
    scanf("%f",w);
    return eval_bmi(*h,*w);
}
