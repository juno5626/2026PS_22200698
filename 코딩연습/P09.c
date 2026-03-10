/*

## P09

다음 역할을 하는 함수를 작성하시오.

    int bmi_level(float bmi)

리턴값

1 : 저체중\
2 : 정상\
3 : 과체중\
4 : 비만

*/

#include <stdio.h>

struct person{
        int height, weight;
        int num;
        float bmi;
    };

float eval_bmi(int height, int weight);
int bmi_level(float bmi);


int main(){
    struct person p[5];
    float sum = 0, avg = 0;

    for(int i = 1; i <=5 ; i++){
        printf("%d person height ? ",i);
        scanf("%d",&p[i-1].height);
        printf("%d person weight ? ",i);
        scanf("%d",&p[i-1].weight);
        p[i-1].bmi = eval_bmi(p[i-1].height,p[i-1].weight);     
        sum = sum +  p[i-1].bmi;
        p[i-1].num = bmi_level(p[i-1].bmi);
    }
    for(int i = 0 ; i < 5 ; i++){
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
