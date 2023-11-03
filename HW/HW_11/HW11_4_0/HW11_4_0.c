#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	int flag = 0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			flag = 1;
	}

	if (flag == 1)
		printf("소수가 아닙니다.\n");
	else
		printf("소수입니다.\n");

	return 0;
}