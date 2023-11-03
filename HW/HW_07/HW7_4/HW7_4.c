//HW7_4 경영학과 20200415 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	printf("Enter a student\n");
	printf("number: ");
	scanf("%d", &num);

	int i = 1;
	int score;
	int total = 0;
	double average;

	while (i <= num) {
		printf("Enter a score: ");
		scanf("%d", &score);
		total += score;
		i++;
	}

	if (num == 0) {
		average = 0;
	}
	else {
		average = (double)total / num;
	}

	printf("The total is %d\n", total);
	printf("The average is %.1f\n", average);

	return 0;
}