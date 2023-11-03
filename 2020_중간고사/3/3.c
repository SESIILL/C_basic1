#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	int count = 0;
	while (n != 0) {
		n /= 10;
		count++;
	}
	printf("%d\n", count);

	return 0;
}