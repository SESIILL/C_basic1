#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d %d ", &a, &b);

	int count = 0;
	while (a > 0) { // a가 더 이상 나누어지지 않을 때까지
		if (a % 10 == b % 10) { // 뒤에서부터 비교했을 때, a와 b의 자릿수가 일치하는 경우
			if (b == 0) {
				printf("%d", a);
				return 0;
			}
			b /= 10;
			count++;
		}
		else { // 일치하지 않는 경우
			b /= 10; // 다음 자릿수 비교를 위해
		}
		a /= 10; // 다음 자릿수 비교를 위해
	}
 
	if (count == 0)
		printf("0\n");
	else {
		for (int i = 0; i < count; i++) {
			printf("%d", a % 10);
			a /= 10;
		}
	}

	return 0;
}