//HW7_1 경영학과 20200415 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char grade;
	int score;

	printf("Enter your grade: ");
	scanf("%c", &grade);

	switch (grade) {
	case 'A':
		printf("Congratulation\n");
		break;
	case 'B':
		printf("Okay, try harder\n");
		break;
	case 'C':
		printf("Enter your score: ");
		scanf("%d", &score);
		printf("Try harder, you need to get %d next time\n", score + 10);
		break;
	case 'D':
		printf("Sorry, you should take this course again\n");
		break;
	case 'F':
		printf("Sorry, you should take this course again\n");
		break;
	default:
		printf("Wrong grade\n");
		break;
	}

	return 0;
}