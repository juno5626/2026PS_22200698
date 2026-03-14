/*
112: 12-2 직사각형 겹침 검사 (동적 메모리 할당)

다음 구조체를 이용하여 직사각형 2개의 좌상점의 좌표값(x, y)와 우하점의 좌표값(x, y)을 입력받은 후에 2개의 직사각형이 평면좌표 상에서 겹치는 부분이 있는지의 여부를 출력하라.

struct rectangle{ 
 int x1, y1; 				// 좌상점 좌표값 (왼쪽 위 모서리) 
 int x2, y2; 				// 우하점 좌표값 (오른 아래 모서리) 
}; 
단, 각 직사각형의 좌상점과 우하점의 좌표를 입력받는 함수를 제작하여 사용하라. 이 함수에서 실제 메모리를 할당하는 작업이 진행되어야 한다.

struct rectangle* getPoints();	// 구조체 메모리를 할당받아 좌표를 입력받은 후 주소값 리턴
또한 2개의 직사각형이 겹치는지 검사하는 다음 함수를 별도로 만들어 사용하라.

int checkOverlap(struct rectangle* r1, struct rectangle* r2); // 겹치면 1리턴, 아니면 0리턴
겹치지 않는 경우의 조건은 다음 중 하나라도 성립하는 경우이다: 1. 하나의 사각형이 다른 사각형의 왼쪽에 있다. 2. 하나의 사각형이 다른 사각형의 오른쪽에 있다. 3. 하나의 사각형이 다른 사각형의 위에 있다. 4. 하나의 사각형이 다른 사각형의 아래에 있다.
*/
#include <stdio.h>
#include <stdlib.h>

struct rectangle{ 
    int x1, y1; 				// 좌상점 좌표값 (왼쪽 위 모서리) 
    int x2, y2; 				// 우하점 좌표값 (오른 아래 모서리) 
}; 

struct rectangle* getPoints();
int checkOverlap(struct rectangle* r1, struct rectangle* r2);

int main(){
	struct rectangle* rect1;  	// A structure pointer for the first rectangle
	struct rectangle* rect2;  	// A structure pointer for the second rectangle
	printf("Rectangle #1\n");
	rect1 = getPoints();
	printf("Rectangle #2\n");
	rect2 = getPoints();
	if (checkOverlap(rect1, rect2)) 
		printf("The two rectangles do not overlap.\n");
	else
		printf("Yes\n");
	return 0;
}
struct rectangle* getPoints(){
    struct rectangle* r = (struct rectangle*)malloc(sizeof(struct rectangle));

    printf("Enter x1 y1 x2 y2: ");
    scanf("%d %d %d %d", &r->x1, &r->y1, &r->x2, &r->y2);

    return r;
}

int checkOverlap(struct rectangle* r1, struct rectangle* r2){

    if(((r1->x1>=r2->x2&&r1->x2<=r2->x2)||(r1->x1>=r2->x1&&r1->x2<=r2->x1))
		&&((r1->y1>=r2->y2&&r1->y2<=r2->y2)||(r1->y1>=r2->y1&&r1->y2<=r2->y1))){
			
        return 0;
    }
    return 1;
}


