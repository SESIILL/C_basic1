﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int count = 0;
	int num;
	int total = 0;

	while (count < 5) {
		do {
			printf("0보다 큰 수를 입력(%d번째): ", count + 1);
			scanf("%d", &num);
		} while (num <= 0);

		total += num;
		count++;
	}
	printf("입력된 값의 총합: %d\n", total);

	return 0;
}