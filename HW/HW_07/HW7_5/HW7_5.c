//HW7_5 경영학과 20200415 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);

	while (num != 0) {
		printf("%d", num % 2);
		num /= 2;
	}

	return 0;
}