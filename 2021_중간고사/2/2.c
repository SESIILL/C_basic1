#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float score;
	scanf("%f", &score);

	if (score >= 100) {
		score = score + (score * 0.5);
		printf("%.2f\n", score);
	}
	else if (score >= 50) {
		score = score + (score * 0.25);
		printf("%.2f\n", score);
	}
	else if (score >= 10) {
		score = score + (score * 0.15);
		printf("%.2f\n", score);
	}
	else {
		printf("%.2f\n", score);
	}

	return 0;
}