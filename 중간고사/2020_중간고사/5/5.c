#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int deposit, target;
	scanf("%d %d", &deposit, &target);

	int count = 0;
	int result = 0;
	int temp = deposit;

	while (1) {
		deposit *= 1.02;
		result = deposit;
		count++;
	
		if (result >= target)
			break;
	
		deposit += temp; 
	}

	int year = 0;
	int month = 0;

	if (count >= 12) {
		year = count / 12;
		month = count % 12;
	}
	else
		month = count;

	printf("%d %d %d", year, month, result);

	return 0;
}