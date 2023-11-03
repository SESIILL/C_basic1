#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cal_odd_digit(int num) {
	int sum = 0;

	while (num != 0) {
		int a = num % 10;
		if (a % 2 == 1) {
			sum += a;
		}
		num /= 10;
	}
	
	return sum;
}

int main(void) {
	int n;
	scanf("%d", &n);
	n *= 3;

	printf("%d\n", cal_odd_digit(n));

	return 0;
}