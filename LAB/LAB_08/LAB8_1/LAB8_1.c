// LAB8_1 경영학과 20200415 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		printf("%d\n", i * i * i);
	}

	return 0;
}