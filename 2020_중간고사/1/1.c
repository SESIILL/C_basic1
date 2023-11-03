#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int month;
	scanf("%d", &month);

	if (month >= 1 && month <= 12) {
		printf("%d월\n", month);
	}
	else
		printf("incorrect\n");

	return 0;
}