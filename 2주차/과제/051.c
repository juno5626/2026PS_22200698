/*
051: 6-1. 회원가입 아이디/비번 입력받기

사용자의 ID와 암호, 이름을 입력받아서 이 내용을 출력하라.

단, 암호는 반드시 3글자 이상이어야 한다. 암호가 3글자 미만이라면 ‘암호는 3글자 이상이어야 합니다.’라는 오류 메시지를 출력한다.

내용을 출력할 때에는 암호의 3번째 글자부터 마지막 글자까지는 * 문자로 표시한다.

변수는 다음과 같이 사용하라.

    char userid[30];         
    char password[30]; 
    char name[30]; 
*/

#include <stdio.h>
#include <string.h>

int main(){

    char userid[30];         
    char password[30]; 
    char name[30]; 

    int judge = 0;

    while(judge == 0){
        scanf("%s",userid);
        scanf("%s",password);
        getchar();
        fgets(name,sizeof(name),stdin);

        if(strlen(password)<3){
            printf("\nThe password must be at least 3 characters long.");
        }else{
            judge =1;
        }
    }

    printf("\nUser Id: %s\n",userid);
    printf("Password: ");
    for(int i = 0 ; i < strlen(password) ; i++){
        if(i<2){
            printf("%c",password[i]);
        }else{
            printf("*");
        }
    }
    printf("\nUser Name: %s",name);
    

    return 0;

}