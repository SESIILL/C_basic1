// 경영학과 20200145 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int score1, score2, average;

	printf("Enter two scores: ");
	scanf("%d %d", &score1, &score2);
	average = (score1 + score2) / 2;

	printf("The average is %d.\n", average);

	return 0;
}
