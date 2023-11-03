#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));
	int answer;
	char ch;

	do {
		int num1 = rand() % 100;
		int num2 = rand() % 100;
		int op = rand() % 4;
		int right;

		switch (op) {
		case 0:
			printf("%d + %d = ", num1, num2);
			right = num1 + num2;
			break;
		case 1:
			printf("%d - %d = ", num1, num2);
			right = num1 - num2;
			break;
		case 2:
			printf("%d * %d = ", num1, num2);
			right = num1 * num2;
			break;
		case 3:
			printf("%d / %d = ", num1, num2);
			right = num1 / num2;
			break;
		}
		scanf("%d", &answer);

		if (answer == right)
			printf("Your answer is right.\n");
		else
			printf("Your answer is wrong.\n%d is right answer.\n", right);

		while (getchar() != '\n');
		printf("Do you want play again? (y/n) ");
		scanf("%c", &ch);
	} while (ch == 'y');

	return 0;
}