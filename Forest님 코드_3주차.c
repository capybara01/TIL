#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int NUMBER_OF_GRADES = 9; // 학점 수
const int SCORES[NUMBER_OF_GRADES] = {95, 90, 85, 80, 75, 70, 65, 60, 0}; // 점수배열
const char *GRADES[NUMBER_OF_GRADES] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"}; // 학점배열

void printScores(const int target[], int length);
void printGrades(const char *target[], int length);
char* calculateGrade(int score, const int scores[], const char *grades[], int length);

int main(void)
{
    printf("학점 프로그램\n");
    printf("종료를 원하면 \"999\"를 입력\n");
    printf("[ 학점 테이블 ]\n");
    printScores(SCORES, NUMBER_OF_GRADES);
    printGrades(GRADES, NUMBER_OF_GRADES);
    
    while(1)
    {
        int score;
        printf("성적을 입력하세요 (0~100) : ");
        scanf("%d", &score);
        if (score >= 0 && score <= 100)
        {
            char *grade = calculateGrade(score, SCORES, GRADES, NUMBER_OF_GRADES);
            printf("학점은 %s 입니다.\n", grade);
        }
        else if (score == 999)
        {
            break; // while문 종료
        }
        else
        {
            printf("%d 성적을 올바르게 입력하세요. 범위는 0~100 입니다.\n", score);
        }
    }
    printf("학점 프로그램을 종료합니다.\n");
}
void printScores(const int target[], int length)
{
    printf("점수 : ");
    for (int i = 0; i < length; i++)
    {
        printf("%d\t", target[i]);
    }
    printf("\n");
}
void printGrades(const char *target[], int length)
{
    printf("학점 : ");
    for (int i = 0; i < length; i++)
    {
        printf("%s\t", target[i]);
    }
    printf("\n");
}
char* calculateGrade(int score, const int scores[], const char *grades[], int length)
{
    char *grade = NULL;
    for (int i = 0; i < length; i++) 
    {
        if (score >= scores[i])
        {
            grade = malloc(sizeof(char) * strlen(grades[i])); // stdlib.h 메모리 동적 할당 
            strcpy(grade, grades[i]); // string.h 학점배열[i]에서 grade로 복사
            break;
        }
    }
    return grade;
}
