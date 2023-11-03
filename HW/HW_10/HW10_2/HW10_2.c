#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void findNPrintBiggest(int a, int b, int c); // 함수의 원형 

int main(void) {
	int num1, num2, num3;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	findNPrintBiggest(num1, num2, num3);
	
	return 0;
}

void findNPrintBiggest(int a, int b, int c) {
	int max;

	if (a > b) {
		max = a;
		if (c > max)
			max = c;
	}
	else {
		max = b;
		if (c > max)
			max = c;
	}

	printf("The biggest number is %d.\n", max);

	return;
}