#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int water, salt;

	scanf("%d", &water);
	scanf("%d", &salt);

	double result = (double)salt / (water + salt) * 100;
	printf("%.2lf%\n", result);

	return 0;
}