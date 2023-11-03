#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int num);

int main(void) {
	int n;
	while (1) {
		printf("Enter a number: ");
		scanf("%d", &n);

		if (n == -1)
			break;

		if (isPrime(n) == 1)
			printf("소수가 아닙니다.\n");
		else
			printf("소수입니다.\n");
	}

	return 0;
}

int isPrime(int num) {
	int flag = 0;
	for (int i = 2; i < num; i++) {
		if (num % i == 0)
			flag = 1;
	}

	return flag;
}