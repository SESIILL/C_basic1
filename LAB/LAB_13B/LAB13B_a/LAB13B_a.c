#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char word[11];
	
	printf("Enter a word(<= 10 chars): ");
	scanf("%s", word);

	for (int i = 0; word[i] != '\0'; i++) {
		if (i % 2 == 0) 
			printf("%c", word[i]);
	}
	printf("\n");

	return 0;
}