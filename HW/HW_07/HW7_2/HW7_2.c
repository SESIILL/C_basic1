//HW7_2 경영학과 20200415 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char operator;
	int num1, num2, result1, result2;

	printf("Enter an operator: ");
	scanf("%c", &operator);
	printf("Enter the first operand: ");
	scanf("%d", &num1);
	printf("Enter the second operand: ");
	scanf("%d", &num2);

	switch (operator) {
	case '+':
		result1 = num1 + num2;
		break;
	case '-':
		result1 = num1 - num2;
		break;
	case '*':
		result1 = num1 * num2;
		break;
	case '/':
		result1 = num1 / num2;
		break;
	}

	printf("%d %c %d = ", num1, operator, num2);
	scanf("%d", &result2);

	if (result1 == result2) {
		printf("Right answer\n");
	}
	else {
		printf("Wrong!\n%d is the right answer\n", result1);
	}

	return 0;
}