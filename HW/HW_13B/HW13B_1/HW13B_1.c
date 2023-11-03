#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char word[81];
	char newWord[81];
	int len = 0;

	printf("Enter one word: ");
	scanf("%s", word);
	printf("word given: %s\n", word);

	for (len = 0; word[len] != '\0'; len++);

	for (int i = 0; i < len; i++) {
		if (word[i] >= 'A' && word[i] <= 'Z')
			newWord[i] = word[i] + 32;
		else if (word[i] >= 'a' && word[i] <= 'z')
			newWord[i] = word[i] - 32;
		else
			newWord[i] = word[i];
	}
	newWord[len] = '\0';

	printf("new word: %s\n", newWord);

	return 0;
}