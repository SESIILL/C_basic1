#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	int binary[8];
	int count = 0;

	printf("Enter 양의 정수(<256): ");
	scanf("%d", &num);

	while (num != 0) {
		binary[count] = num % 2;
		num /= 2;
		count++;
	}

	for (int i = 0; i < count; i++) {
		printf("%d", binary[count - i - 1]);
	}
	printf("\n");

	return 0;
}