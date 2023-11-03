// 경영학과 20200145 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int totalMinutes, hour, minute;

	printf("Enter the total minutes: ");
	scanf("%d", &totalMinutes);

	printf("%dh %dm\n", (totalMinutes / 60), (totalMinutes % 60));

	return 0;
}
