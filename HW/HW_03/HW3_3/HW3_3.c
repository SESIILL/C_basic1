// 경영학과 20200145 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int hour, minute, second;

	printf("Enter h m s: ");
	scanf("%d %d %d", &hour, &minute, &second);

	int totalSeconds = (hour * 3600) + (minute * 60) + second;

	printf("--- Calculation Result ---\n");
	printf("Total %d seconds\n", totalSeconds);

	return 0;
}
