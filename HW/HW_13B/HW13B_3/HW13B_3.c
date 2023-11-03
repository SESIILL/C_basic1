#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char word[81];
	char newWord[81];
	int len;

	printf("Enter one word: ");
	scanf("%s", word); // abcde

	for (len = 0; word[len] != '\0'; len++);
	
	for (int i = 0; word[i] != '\0'; i++) {
		newWord[len - i - 1] = word[i];
	}
	newWord[len] = '\0';

	printf("The reversed word is %s\n", newWord);

	return 0;
}