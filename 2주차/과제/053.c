/*
053: 6-3. 문자열 길이 검사하기

제공된 소스 코드에 주어진 14개의 학부 이름 중 가장 긴 것과 가장 짧은 것을 찾아내어 출력하라.

char names[14][100]={
    "Global Leadership School",
    "International Studies, Languages and Literature",
    "Management and Economics",
    "Law",
    "Counseling Psychology and Social Welfare",
    "Communication Arts",
    "Spatial Environment System Engineering",
    "Mechanical and Control Engineering",
    "Contents Convergence Design",
    "Life Science",
    "Computer Science and Electrical Engineering",
    "Global Entrepreneurship and ICT",
    "Creative Convergence Education",
    "Applied Artificial Intelligence"
};
*/

#include <stdio.h>
#include <string.h>

int main(){

    char names[14][100]={
        "Global Leadership School",
        "International Studies, Languages and Literature",
        "Management and Economics",
        "Law",
        "Counseling Psychology and Social Welfare",
        "Communication Arts",
        "Spatial Environment System Engineering",
        "Mechanical and Control Engineering",
        "Contents Convergence Design",
        "Life Science",
        "Computer Science and Electrical Engineering",
        "Global Entrepreneurship and ICT",
        "Creative Convergence Education",
        "Applied Artificial Intelligence"
    };
    
    int lon=strlen(names[0]);
    int shor=strlen(names[0]);
    int count = 0;

    for(int i = 0 ; i <14 ; i++){
        if(strlen(names[i])>lon){
            lon = strlen(names[i]);          
        }

        if(strlen(names[i])<shor){
            shor = strlen(names[i]);;
        }
    }

    printf("The longest school name ");
    for(int i = 0 ; i < 14 ; i++){
        if(count>0){
            printf(", ");
        }
        if(strlen(names[i])==lon){
            printf("%s",names[i]);
        }
    }
    printf("\nThe shortest school name is ");
    for(int i = 0 ; i < 14 ; i++){
        if(count>0){
            printf(", ");
        }
        if(strlen(names[i])==shor){
            printf("%s",names[i]);
        }
    }
    return 0;

}