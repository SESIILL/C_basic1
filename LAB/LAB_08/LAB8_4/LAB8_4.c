// LAB8_4 경영학과 20200415 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int score;
	int maxScore = -1;

	for (int i = 0; i < 5; i++) {
		printf("Enter a score: ");
		scanf("%d", &score);

		if (maxScore < score)
			maxScore = score;
	}
	printf("The best score is %d.\n", maxScore);

	return 0;
}