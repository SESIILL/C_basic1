#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char s[81];

	printf("Enter one word: ");
	scanf("%s", s);

	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] + '\0' >= 65 && s[i] + '\0' <= 90)
			printf("%c\n", s[i]);
	}

	return 0;
}