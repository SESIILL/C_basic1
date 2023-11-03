#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char s[81];
	int count = 0;

	printf("Enter a string: ");
	scanf("%s", s);

	for (int i = 0; s[i] != '\0'; i++) {
		count++;
	}

	printf("길이는 %d\n", count);

	for (int i = 0; i < count; i++) {
		printf("%c\n", s[count - i - 1]);
	}

	return 0;
}