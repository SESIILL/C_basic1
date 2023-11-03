#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, digit;
	scanf("%d %d", &num, &digit);

	int newNum = num * 3;
	int count = 0;

	while (newNum != 0) {
		int remainder = newNum % 10;
		if (remainder == digit) {
			count++;
		}
		newNum /= 10;
	}
	printf("%d\n", count);
	
	return 0;
}