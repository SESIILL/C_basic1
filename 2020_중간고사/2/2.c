#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	int result = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			result += i;
		}
	}
	printf("%d\n", result);

	return 0;
}