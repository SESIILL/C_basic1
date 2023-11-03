// HW8_7 경영학과 20200415 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);

	for (int i = 1; i <= number; i++) {
		if (number % i == 0)
			printf("%d ", i);
	}
	printf("\n");

	return 0;
}