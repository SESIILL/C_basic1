#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printSum1ToN(int a);

int main(void) {
	int n; printf("Enter a number: ");
	scanf("%d", &n);
	printSum1ToN(n);
	
	return 0;
}

void printSum1ToN(int a) {
	int sum = 0;
	for (int i = 1; i <= a; i++)
		sum += i;
	printf("1~%d의 합: %d\n", a, sum);
	
	return;
}