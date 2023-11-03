//LAB7_7 경영학과 20200415 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	while (n != 0) {
		printf("%d", n % 10);
		n /= 10;
	}

	return 0;
}