// LAB8_3 경영학과 20200415 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	printf("Enter the # of integers: ");
	scanf("%d", &num);

	int integer;
	int count = 0;
	for (int i = 0; i < num; i++) {
		printf("Enter an integer: ");
		scanf("%d", &integer);

		if (integer % 2 == 0)
			count++;
	}
	printf("The number of even numbers is %d.\n", count);

	return 0;
}