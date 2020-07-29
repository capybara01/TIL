#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int NUMBER_OF_GRADES = 9;
const int SCORES[NUMBER_OF_GRADES] = {95, 90, 85, 80, 75, 70, 65, 60, 0};
const char *GRADES[NUMBER_OF_GRADES] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};

void printTables(const int target_scores[],const char *target_grade[], const int length);
void calculateGrade(int score, const int target_scores[], const char *target_grades[], const int length);

int main(int argc, char *argv[]) 
    {
        printf("학점 프로그램\n종료를 원하면\'999\n'를 입력\n[학점 테이블]\n");
        printScores(SCORES, NUMBER_OF_GRADES);
        printGrades(GRADES, NUMBER_OF_GRADES);
        
int *studentAnswers = charArrayToIntArray(argv, argc);
        for (int i = 0; i < NUMBER_OF_GRADES; i++) 
        {
            if (studentAnswers[i] >= 0 && studentAnswers[i] <= 100)
            {
			continue;
	    	}
            else 
            {
			printf("성적을 올바르게 입력하세요! (0 ~ 100)\n");
			return -1;
            }

        }
        
      }
