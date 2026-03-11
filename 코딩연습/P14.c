/*

## P14

구조체 배열을 이용하여 **비만 인원 수를 계산**하시오.

*/

#include <stdio.h>

struct person{
        float height, weight;
        int bmi_index;
        float bmi;
    };

float eval_bmi(float height, float weight);
int bmi_level(float bmi);
float bmi_input(float *h, float *w);

int main(){
    struct person p[5];
    int count = 0;

    for(int i = 1; i <=5 ; i++){
        printf("%d person height, weight ? ",i);
        p[i-1].bmi = bmi_input(&p[i-1].height,&p[i-1].weight);
        p[i-1].bmi_index = bmi_level(p[i-1].bmi);
        if(p[i-1].bmi_index==4){
            count++;
        }
    }
    for(int i = 0 ; i < 5 ; i++){
        printf("person %d bmi : %.1f (",i+1,p[i].bmi);
        switch(p[i].bmi_index){
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
    
    printf("over weight person : %d",count);

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
