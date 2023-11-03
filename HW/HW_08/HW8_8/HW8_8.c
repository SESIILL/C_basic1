// HW8_8 경영학과 20200415 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);

	int flag = 0;
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			flag = 1;
			break;
		}
	}

	if (number == 1) // 1은 소수가 아니다.
		printf("소수가 아니다.\n");
	else if (flag == 0)
		printf("소수이다.\n");
	else
		printf("소수가 아니다.\n");

	return 0;
}