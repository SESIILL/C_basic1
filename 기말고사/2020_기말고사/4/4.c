#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ch가 w안에 있으면 1을, 없으면 0을 반환한다.
int is_in(char w[], char ch) {
	int i, j;
	for (i = 0; w[i] != '\0'; i++);

	for (j = 0; j < i; j++) {
		if(w[j] == ch)
			return 1;
	}
	return 0;
}

int main(void) {
	char word[20];
	scanf("%s", word); // BOY

	for (int i = 65; i < 91; i++) { // A to Z
		if (is_in(word, i) == 0) {
			printf("%c", i);
		}
	}
	printf("\n");

	return 0;
}