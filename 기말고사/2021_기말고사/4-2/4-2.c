#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void changeToDigitEncode(char s[], char e[]) {
	int i, num;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++) {
		num = s[i] - 64;
		
		if (num > 9) {
			e[j++] = (num / 10) + '0';
			e[j++] = (num % 10) + '0';
		}
		else
			e[j++] = num + '0';
	}
	e[j] = '\0';
}

int main(void) {
	char sentence[20], encoded[40];
	scanf("%s", sentence);
	changeToDigitEncode(sentence, encoded);
	printf("%s\n", encoded);

	return 0;
}