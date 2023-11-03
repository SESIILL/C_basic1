#include <stdio.h>

int sumMToN(int m, int n); // 함수의 원형

int main(void) {
	printf("%d부터 %d까지의 합은 %d\n", 2, 5, sumMToN(2, 5));
	printf("%d부터 %d까지의 합은 %d\n", 3, 7, sumMToN(3, 7));
	printf("%d부터 %d까지의 합은 %d\n", 2, 10, sumMToN(2, 10));
	return 0;
}

int sumMToN(int m, int n) {
	int sum = 0;
	for (int i = m; i <= n; i++)
		sum += i;
	return sum;
}