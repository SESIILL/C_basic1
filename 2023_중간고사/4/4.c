#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char start;
	int n;

	scanf("%c", &start);
	scanf("%d", &n);

	int startNum = start - '0';

	for (int i = n; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			printf("%c ", startNum + j + '0');
		}
		printf("\n");
	}

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf("%c ", startNum + j + '0');
		}
		printf("\n");
	}

	return 0;
}