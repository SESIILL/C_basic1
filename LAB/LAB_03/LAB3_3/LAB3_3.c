// 경영학과 20200145 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int totalMinutes, hour, minute;

	printf("Enter hour: ");
	scanf("%d", &hour);
	printf("Enter minute: ");
	scanf("%d", &minute);

	totalMinutes = (hour * 60) + minute;
	printf("Total %d minutes\n", totalMinutes);

	return 0;
}
