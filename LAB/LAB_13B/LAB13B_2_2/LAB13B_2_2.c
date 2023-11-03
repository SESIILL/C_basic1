#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char s[81];
	char newWord[81];
	int count = 0;

	printf("Enter one word: ");
	scanf("%s", s);

	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] + '\0' >= 65 && s[i] + '\0' <= 90) {
			newWord[count] = s[i];
			count++;
		}
	}
	newWord[count] = '\0';

	printf("%s\n", newWord);

	return 0;
}