/*
001: 1-1. 태어난 년도로 나이 계산 

태어난 년도를 입력받은 후, 이 값을 이용하여 나이를 계산하고 출력하라.

단, 나이 = 올해년도 – 태어난 년도 즉, 만 나이로 계산한다.

변수는 다음과 같이 사용하라.

int birth_year; // 태어난 년도 
int age; // 나이 
Write a C program that takes the year of birth as input, calculate the age using this value and output it.

age = current year - year of birth
Use the following variables:

int birth_year; 	// Year of birth 
int age; 		   // Age
[Input example] Year of birth

2000
[Output example] Age

24

*/

#include <stdio.h>

int main(){
    int birth_year; // 태어난 년도 
    int age; // 나이 

    scanf("%d",&birth_year);
    age = 2026-birth_year;

    printf("%d",age);

    return 0;
}