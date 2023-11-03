#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printSumMToN(int m, int n);

int main() {
	int m, n;
	printf("Enter two numbers: ");
	scanf("%d %d", &m, &n);
	printSumMToN(m, n);
}

void printSumMToN(int m, int n) {
	int sum = 0;
	for (int i = m; i <= n; i++)
		sum += i;
	printf("%d~%d의 합: %d\n", m, n, sum);

	return;
}