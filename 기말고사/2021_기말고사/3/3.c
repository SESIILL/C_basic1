#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, i, key;
	int s[21], a[21], b[21];
	int aLen = 0;
	int bLen = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &s[i]);
	scanf("%d", &key);

	for (i = 0; i < n; i++) {
		if (s[i] < key) {
			a[aLen] = s[i];
			aLen++;
		}
		else {
			b[bLen] = s[i];
			bLen++;
		}
	}

	for (i = 0; i < aLen; i++)
		printf("%d ", a[i]);
	printf("\n");

	for (i = 0; i < bLen; i++)
		printf("%d ", b[i]);
	printf("\n");

	return 0;
}