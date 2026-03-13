/*
052: 6-2. 문자열 거꾸로 출력하기 

하나의 문자열을 입력받은 후에 이 문자열 안에 들어있는 문자들의 순서를 거꾸로 바꾸어 저장한 문자열을 출력하라.

char str[100]; 			// 입력받은 문자열 
char reverse[100]; 		// 순서를 거꾸로 바꾼 문자열
*/

#include <stdio.h>
#include <string.h>

int main(){

    char str[100]; 			// 입력받은 문자열 
    char reverse[100];


    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    for(int i =0 ; i<strlen(str) ;i++){
        reverse[strlen(str)-1-i] = str[i];
    }

    printf("%s",reverse);
    
    

    return 0;

}