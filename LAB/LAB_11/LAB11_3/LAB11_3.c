#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int scoreReading(void);
char gradeDecision(int s1);

int main(void) {
	int score;
	score = scoreReading();
	printf("Grade is %c!\n", gradeDecision(score));
}

int scoreReading(void) {
	int s;
	printf("Enter a score: ");
	scanf("%d", &s);

	return s;
}

char gradeDecision(int s1) {
	if (s1 >= 80)
		return 'A';
	else if (s1 >= 50)
		return 'B';
	else
		return 'F';
}