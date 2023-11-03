// 경영학과 20200415 손채연
#include <stdio.h>

int main(void)
{
	int totalSecond = 14000;
	int hour = totalSecond / 3600;
	int minute = totalSecond % 3600 / 60;
	int second = totalSecond % 60;

	printf("%d seconds:\n", totalSecond);
	printf("%dh %dm %ds", hour, minute, second);

	return 0;
}