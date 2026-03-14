/*
086: 9-6 숫자 3개 정렬하는 함수 만들기

메인 함수에서 정수 3개(num1, num2, num3)를 입력받은 후, 이 숫자들의 주소값을 넘겨주면 크기가 큰 순서대로 num1, num2, num3에 저장되도록 변경하는 함수를 제작하여 테스트하라.

단, 제공된 main() 함수 코드를 수정없이 함수 내용만 작성하라. 함수의 원형은 다음과 같다.

void sort3Num(int* n1, int* n2, int* n3); 
파라미터 : 정수포인터 3개
리턴값 : 없음
수행내용 : 정수포인터 3개의 실제 값을 기준으로 가장 큰 수부터 정렬되도록 변수값 변경함 ---
*/

#include <stdio.h>
void sort3Num(int* n1, int* n2, int* n3); 

int main(void) {
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	sort3Num(&num1, &num2, &num3);
	printf("%d %d %d\n", num1, num2, num3);
	return 0;
}
void sort3Num(int* n1, int* n2, int* n3){
    if(*n2>*n1){
        int temp = *n1;
        *n1 = *n2;
        *n2 = temp;
    }
    if(*n3>*n1){
        int temp1 = *n1;
        int temp2 = *n2;
        *n1 = *n3;
        *n2 = temp1;
        *n3 = temp2;
    }
    if(*n3>*n2&&*n3<*n1){
        int temp = *n2;
        *n2 = *n3;
        *n3 = temp;
    }
    
    return;
}
