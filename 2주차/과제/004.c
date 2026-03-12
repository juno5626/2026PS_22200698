/*
004
직사각형의 가로크기와 세로크기를 입력받아 이 값을 이용하여 직사각형의 넓이를 계산하고 출력하라.

단, 직사각형의 넓이 = 가로크기 * 세로크기 로 계산한다.

변수는 다음과 같이 사용하라.

int width, height; 	// 가로크기, 세로크기 
int area; 			// 직사각형의 넓이 
*/

#include <stdio.h>

int main(){
    int width, height; 	// 가로크기, 세로크기 
    int area; 			// 직사각형의 넓이 

    scanf("%d %d",&width, &height);
    area = width*height;
    printf("%d",area);

    return 0;
}