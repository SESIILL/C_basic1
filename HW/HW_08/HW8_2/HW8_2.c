// HW8_2 경영학과 20200415 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int score, number;
	int maxScore = -1;
	int minScore = 1000;

	printf("Enter a number of score: ");
	scanf("%d", &number);

	for (int i = 0; i < number; i++) {
		printf("Enter a score: ");
		scanf("%d", &score);

		if (maxScore < score)
			maxScore = score;
		if (minScore > score)
			minScore = score;
	}

	printf("The best score is %d.\n", maxScore);
	printf("The worst score is %d.\n", minScore);

	return 0;
}