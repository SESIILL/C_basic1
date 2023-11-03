// 경영학과 20200145 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2;

	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);

	printf("%d + %d = %d\n", num1, num2, (num1 + num2));
	printf("%d - %d = %d\n", num1, num2, (num1 - num2));
	printf("%d * %d = %d\n", num1, num2, (num1 * num2));
	printf("%d / %d = %d\n", num1, num2, (num1 / num2));

	return 0;
}
