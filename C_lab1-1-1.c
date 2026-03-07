#include <stdio.h>

int main(){

    
    int size; // 크기
    int stars, blank1, blank2; // 별의 갯수, 빈칸1의 갯수, 빈칸2의 갯수 
    int i, j; // 반복문을 위한 변수
/*
    printf("크기를 입력하시오: ");
    scanf("%d", &size);
    for(j = 1 ; j<= 4 ; j++){
        if(j==1){
            for(i =1 ; i<=size ;i++){
                for(int k =1; k<=size*2;k++){
                    if(k<=size*2-i+1 || k==i){
                        printf("*");
                    }else{
                        printf(" ");
                    }
                }
            }
        }
        
    }
*/
    for(int j =0;j<5;j++){
        
        for(i=0;i<10;i++){
            if(i==0||i==9){
                printf("*");
            }else{
                printf(" ");
            }
            if(i==9){
                printf("\n");
            }
        }
    }
}