#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int count = 0;
	int flag = 1;
	int prime = 2;

	do {
		for (int i = 2; i < prime; i++) {
			if (prime % i == 0) {
				flag = 0;
				break;
			}
		}

		if (flag == 1) {
			printf("%d번째 소수는 %d\n", count + 1, prime);
			count++;
		}

		prime++;
		flag = 1;
		
	} while (count < 10);

	return 0;
}