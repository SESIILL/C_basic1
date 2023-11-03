#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	scanf("%d", &num);

	int temp = num;
	int reverseNum = 0;

	while (num != 0) {
		reverseNum = (reverseNum * 10) + (num % 10);
		num /= 10;
	}

	int flag = 1;
	int r1 = 0;
	int r2 = 0;

	while (temp != 0) {
		r1 = reverseNum % 10;
		r2 = temp % 10;

		if (r1 != r2) {
			flag = 0;
			break;
		}

		reverseNum /= 10;
		temp /= 10;
	}

	if (flag == 1)
		printf("the same.\n");
	else if (flag == 0)
		printf("not the same.\n");

	return 0;
}