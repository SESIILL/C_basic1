#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int year, digit;

	scanf("%d", &year);
	digit = year % 10;

	if (digit == 1 || digit == 6) 
		printf("월요일, 토요일, 일요일\n");
	else if (digit == 2 || digit == 7) 
		printf("화요일, 토요일, 일요일\n");
	else if (digit == 3 || digit == 8) 
		printf("수요일, 토요일, 일요일\n");
	else if (digit == 4 || digit == 9) 
		printf("목요일, 토요일, 일요일\n");
	else 
		printf("금요일, 토요일, 일요일\n");

	return 0;
}