#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char word[81];
	int sum = 0;

	printf("Enter one word: ");
	scanf("%s", word);

	for (int i = 0; word[i] != '\0'; i++) {
		if (word[i] - '0' < 10)
			sum += word[i] - '0';
	}

	printf("안에 있는 숫자들의 합은: %d\n", sum);

	return 0;
}