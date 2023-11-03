#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n = 0;
	int sum = 0;
	int flag = 1;

	while (1) {
		scanf("%d", &n);

		if (n == -1)
			break;

		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				flag = 0;
				break;
			}
		}

		if (flag == 1)
			sum += n;
		else
			flag = 1;
	}
	printf("%d\n", sum);

	return 0;
}