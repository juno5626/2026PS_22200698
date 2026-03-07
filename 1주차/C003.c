#include <stdio.h>
#include <stdlib.h>
#include <time.h>   

int findRoom(int persons[5]); //배정할 호실 찾기
void printReport(char mn[10][20], int mr[10], int mc, char wn[10][20], int wr[10], int wc);
//배정결과 출력하기


//2층 짜리 생활관에서 학생을 등록하면서 호실을 등록하는 프로그램이다.
//각 층마다 5개의 호실이 준비되어 있으며, 2인 1실로 배정된다. 1층은 남학생용, 2층은 여학생용이다.
int main() {
    int jud =1; //프로그램 종료 여부 판단 변수
    int mc = 0; //남학생 수
    int wc = 0; //여학생 수
    char mn[10][20]; //남학생 이름      
    int mr[10]; //남학생 호실 번호
    char wn[10][20]; //여학생 이름
    int wr[10]; //여학생 호실 번호 
    int rooms[2][5] = {0}; //호실별 학생 수 (0: 남학생, 1: 여학생)

    printf("===========================================\n");
    printf("생활관 호실 배정 프로그램\n");
    printf("===========================================\n");

    while(jud != 0){
        
        printf("메뉴 : 1.남학생 등록 2.여학생 등록 3.배정 결과 출력 0.종료 >");
        scanf("%d", &jud);
        if(jud == 1){
            //남학생 등록
            if(mc >= 10){
                printf("남은 남학생 호실이 없습니다.\n");
                printf("\n");
            }else{
                printf("학생 이름은? >");
                scanf("%s", mn[mc]);
                mr[mc] = findRoom(rooms[0]);
                printf("%s 학생 10%d호실에 배정되었습니다.\n", mn[mc], mr[mc]+1);                
                printf("\n");
                rooms[0][mr[mc]]++;
                mc++;
            }
        }else if(jud == 2){
            //여학생 등록
            if(wc >= 10){
                printf("남은 여학생 호실이 없습니다.\n");
                printf("\n");
            }else{
                printf("학생 이름은? >");
                scanf("%s", wn[wc]);
                wr[wc] = findRoom(rooms[1]);
                printf("%s 학생 20%d호실에 배정되었습니다.\n", wn[wc], wr[wc]+1);
                printf("\n");
                rooms[1][wr[wc]]++;
                wc++;
            }
        }else if(jud == 0){
            printf("프로그램을 종료합니다.\n");
            break;
        }else if(jud == 3){
            printReport(mn, mr, mc, wn, wr, wc);
        }else{
            printf("잘못된 입력입니다. 다시 입력해주세요.\n");   
            printf("\n");
       
        }

    }

    return 0;
}

int findRoom(int persons[5]){
    //배정할 호실 찾기
    srand(time(NULL)); 
    int i = rand()%5;
    while(persons[i] == 2){
        i = rand()%5;
    }
    return i;
}

void printReport(char mn[10][20], int mr[10], int mc, char wn[10][20], int wr[10], int wc){
    //배정결과 출력하기
    printf("\n\n");
    printf("===========================================\n");
    printf("생활관 호실 배정 결과는 다음과 같습니다.\n");
    printf("===========================================\n");

    if(mc==0){
        printf("등록된 남학생이 없습니다.\n");
        printf("\n");
    }   

    for(int i = 0; i < mc; i++){
        printf("%d. %s [10%d호]\n", i+1, mn[i], mr[i]+1);        
    }
    printf("\n");
    printf("여학생 호실 배정 결과\n");

    if(wc==0){
        printf("등록된 여학생이 없습니다.\n");
        printf("\n");

    }   
    
    for(int i = 0; i < wc; i++){
        printf("%d. %s [20%d호]\n", i+1, wn[i], wr[i]+1);     
    }

    printf("\n호실별 배정 명단\n");
    for(int i = 1 ; i<3; i++){
        for(int j = 0; j < 5; j++){
            printf("%d0%d호 : ",i, j+1);
            if(i==1){
                for(int k = 0; k < mc; k++){    
                    if(mr[k] == j){
                        printf("%s ", mn[k]);
                    }
                }
            }else{
                for(int k = 0; k < wc; k++){    
                    if(wr[k] == j){
                        printf("%s ", wn[k]);   
                    }
                }
            }
            printf("\n");   
        }
    }   


    return;
}