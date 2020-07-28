#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int NUMBER_OF_ANSWERS = 10;
const int ANSWERS[NUMBER_OF_ANSWERS] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};

const int NUMBER_OF_GRADES = 9;
const int SCORES[NUMBER_OF_GRADES] = {95, 90, 85, 80, 75, 70, 65, 60, 0};
const char *GRADES[NUMBER_OF_GRADES] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};

int* charArrayToIntArray(char *target[], const int length);
int getNumberOfCollectAnswers(const int answers[], const int target[], int length);
int calculateScore(int numberOfCollectAnswers);
void printAnswers(char *who, const int target[], int length);
char* calculateGrade(int totalScore, const int scores[], const char *grades[], int length);

int main(int argc, char *argv[]) {
	if (argc != (NUMBER_OF_ANSWERS + 1)) {
		printf("문제는 10 문제입니다. 현재 %d 개의 답안을 제출했습니다. 10개의 답안을 제출하시오.\n", argc - 1);
		printf("ex) ./mission02 4 4 3 5 2 5 1 2 4 3\n");
		return -1;
	}

	int *studentAnswers = charArrayToIntArray(argv, argc);

	for (int i = 0; i < NUMBER_OF_ANSWERS; i++) {
		if (studentAnswers[i] >= 0 && studentAnswers[i] <= 100) {
			continue;
		} else {
			printf("성적을 올바르게 입력하세요! (0 ~ 100)\n");
			return -1;
