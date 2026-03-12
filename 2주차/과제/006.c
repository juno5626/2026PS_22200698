/*
006: 1-6. 날 수를 입력받아 시, 분, 초 계산

날 수를 입력받아 이 날 수에 해당되는 기간을 시간, 분, 초로 각각 환산한 값을 계산하여 출력하라.

단, 계산식은 다음과 같다.

시 = 날 수 * 24
분 = 날 수 * 24 * 60
초 = 날 수 * 24 * 60 * 60
변수는 다음과 같이 사용하라.

int days; 			// 입력받은 날 수 
int hours; 			// 환산한 시간 
int minutes; 		// 환산한 분 
int seconds; 		// 환산한 초 

25 days = 600 hours
25 days = 36000 minutes
25 days = 2160000 seconds
*/

#include <stdio.h>

int main(){

    int days; 			// 입력받은 날 수 
    int hours; 			// 환산한 시간 
    int minutes; 		// 환산한 분 
    int seconds; 		// 환산한 초 
   
    scanf("%d",&days);
    hours = days * 24;
    minutes = hours * 60;
    seconds = minutes * 60;
    printf("%d days = %d hours\n",days,hours);
    printf("%d days = %d minutes\n",days,minutes);
    printf("%d days = %d seconds\n",days,seconds);

    return 0;

}