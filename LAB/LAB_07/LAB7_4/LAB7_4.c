//LAB7_4 경영학과 20200415 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);

	int i = 1;
	while (i <= num) {
		if (i % 3 == 0 || i % 5 == 0) {
			printf("%d ", i);
		}
		i++;
	}

	return 0;
}