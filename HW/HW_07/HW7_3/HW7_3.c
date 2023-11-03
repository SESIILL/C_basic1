//HW7_3 경영학과 20200415 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);

	int i = 1;
	int factorial = 1;

	while (i <= num) {
		factorial *= i;
		i++;
	}
	printf("%d의 Factorial 값은 %d이다.\n", num, factorial);

	return 0;
}