#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main(void) {
	srand(time(NULL));
	int answer;
	char ch;

	do {
		int num1 = rand() % 100;
		int num2 = rand() % 100;
		int right = num1 + num2;

		printf("%d + %d = ", num1, num2);
		scanf("%d", &answer);

		if (answer == right)
			printf("Your answer is right.\n");
		else
			printf("Your answer is wrong.\n%d is right answer.\n", right);

		while (getchar() != '\n');
		printf("Do you want play again? (y/n) ");
		scanf("%c", &ch);
	}
	while (ch == 'y');

	return 0;
}