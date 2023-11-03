#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, i;
	int k = 2;
	int firstNum = 0;
	int secondNum = 0;
	int flag = 0;

	scanf("%d", &n);

	while (k < n / 2) {
		int isPrime1 = 1;
		int isPrime2 = 1;

		// 첫 번째 수인 k가 소수인지 확인
		for (i = 2; i < k; i++) {
			if (k % i == 0) {
				isPrime1 = 0;
				break;
			}
		}

		if (isPrime1 == 1) {
			firstNum = k;
			secondNum = n - k;

			// 두 번째 수인 secondNum이 소수인지 확인
			for (i = 2; i < secondNum; i++) {
				if (secondNum % i == 0) {
					isPrime2 = 0;
					break;
				}
			}

			if (isPrime2 == 1) {
				printf("%d + %d = %d\n", firstNum, secondNum, n);
				flag = 1; // 소수 쌍이 발견되었음을 표시
			}
		}

		k++;
	}

	if (flag == 0) 
		printf("no expression.\n"); // 소수 쌍이 없는 경우 출력

	return 0;
}