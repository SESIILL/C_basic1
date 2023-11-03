#include <stdio.h>

int main(void) {
	int totalMinute = 130;
	int hour = totalMinute / 60;
	int minute = totalMinute % 60;
	printf("%dh %dm", hour, minute);

	return 0;
}