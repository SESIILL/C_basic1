#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int m, n;
	scanf("%d %d", &m, &n);

	int result = 0;
	while (m <= n) { // m부터 n까지
		int flag = 1;

		for (int i = 2; i < m; i++) {
			if (m % i == 0) {
				flag = 0;
				break;
			}
		}

		if (flag == 1) 
			result += m;
		
		m++;
	}
	printf("%d\n", result);

	return 0;
}