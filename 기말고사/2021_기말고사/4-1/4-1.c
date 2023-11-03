#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void changeToDigitEncode(char s[], char e[]) {
	int i, len;
	for (len = 0; s[len] != '\0'; len++);

	for (i = 0; i < len; i++) {
		e[i] = s[i] - 64;
		e[i] += '0';
	}
	e[i] = '\0';	
}

int main(void) {
	char sentence[20], encoded[40];
	scanf("%s", sentence);
	changeToDigitEncode(sentence, encoded);
	printf("%s\n", encoded);

	return 0;
}