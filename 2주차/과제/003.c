/*
003
섭씨 온도를 입력받아 이 값을 화씨온도로 변환하여 출력하라.

단, 화씨 온도 = 섭씨 온도 * 1.8 + 32 로 계산한다.

변수는 다음과 같이 사용하라.

float c_degree; 		// 섭씨 온도 
float f_degree; 		// 화씨 온도 

[Input example] : Celsius Temperature

20.5
[Output example] : Fahrenheit Temperature

68.9

*/

#include <stdio.h>

int main(){
    float c_degree; 		// 섭씨 온도 
    float f_degree; 		// 화씨 온도 

    scanf("%f",&c_degree);
    f_degree = c_degree*1.8 + 32;
    printf("%.1f",f_degree);

    return 0;
}