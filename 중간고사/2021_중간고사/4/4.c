#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);

	int count = 0;
	int result = 0;

	while (count < m) {
		int flag = 1; // 소수
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				flag = 0; // 소수가 아님.
				break;
			}
		}

		if (flag == 1) {
			result += n;
			count++;
		}

		n++;
	}
	printf("%d\n", result);

	return 0;
}