// 경영학과 20200145 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int totalSeconds;
	printf("Enter the total seconds: ");
	scanf("%d", &totalSeconds);

	int hour = totalSeconds / 3600;
	int minute = totalSeconds % 3600 / 60;
	int second = totalSeconds % 60;

	printf("--- Calculation Result ---\n");
	printf("%d seconds\n", totalSeconds);
	printf("%dh %dm %ds\n", hour, minute, second);

	return 0;
}
