//HW7_7 경영학과 20200415 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m;
	printf("Enter two numbers: ");
	scanf("%d %d", &n, &m);

	int result = 1;
	while (result <= m) {
		printf("%d ", result);
		result *= n;
	}

	return 0;
}