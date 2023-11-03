#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int num) {
	if (num == 0 || num == 1)
		return 0;

	for (int i = 2; i < num; i++) {
		if (num % i == 0) 
			return 0;
	}

	return 1;
}

int main(void) {
	int a[20], p[20], np[20];
	int i, n;
	int pLen = 0;
	int npLen = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < n; i++) {
		if (is_prime(a[i]) == 1) {
			p[pLen] = a[i];
			pLen++;
		}
		else {
			np[npLen] = a[i];
			npLen++;
		}
	}

	for (i = 0; i < pLen; i++)
		printf("%d ", p[i]);
	for (i = 0; i < npLen; i++)
		printf("%d ", np[i]);

	printf("\n");

	return 0;
}