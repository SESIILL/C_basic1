// HW8_6 경영학과 20200415 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long number;
	printf("Enter a number: ");
	scanf("%lld", &number);

	long long result = 1;
	for (long long i = 1; i <= number; i++) {
		result *= i;
		printf("%lld! = %lld\n", i, result);
	}

	return 0;
}