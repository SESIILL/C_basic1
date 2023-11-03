#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int score;
	int total = 0;
	int count = 0;
	int best = -100;

	printf("Enter a score(-1 for exit): ");
	scanf("%d", &score);

	if (score == -1)
		printf("You’ve entered 0 students.\nThere is no data.\n");
	else {
		while (score != -1) {
			total += score;
			count++;

			printf("Enter a score(-1 for exit): ");
			scanf("%d", &score);

			if (best < score)
				best = score;
		}

		double avg = (double)total / count;
		printf("The total is %d.\n", total);
		printf("The average is %.2lf.\n", avg);
		printf("The best score is %d.\n", best);
	}

	return 0;
}