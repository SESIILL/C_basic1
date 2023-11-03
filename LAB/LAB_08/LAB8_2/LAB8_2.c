// LAB8_2 경영학과 20200415 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);

	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", num, i, (num * i));
	}

	return 0;
}