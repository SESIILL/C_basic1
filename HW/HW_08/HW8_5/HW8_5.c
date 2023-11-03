// HW8_5 경영학과 20200415 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int number;
	printf("Enter a number (>=2): ");
	scanf("%d", &number);

	int result = 1;
	for (int i = 1; i <= number; i++) {
		result *= i;
	}

	printf("%d! = ", number);
	for (int i = number; i > 1; i--) {
		printf("%d * ", i);
	}
	printf("1 = %d\n", result);

	return 0;
}