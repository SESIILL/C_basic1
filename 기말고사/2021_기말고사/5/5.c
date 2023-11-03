#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isHiddenPassword(char passwd[], char input[]) {
	int len; // passwd의 길이
	int j;

	for (len = 0; passwd[len] != '\0'; len++);
	j = 0;

	for (int i = 0; input[i] != '\0'; i++) {
		if (input[i] == passwd[j])
			j++;
	}

	if (j == len) 
		return 1;
	else
		return 0;
}

int main(void) {
	char passwd[20], input[20];
	scanf("%s", passwd);

	for (int i = 0; i < 3; i++) {
		scanf("%s", input);
		if (isHiddenPassword(passwd, input) == 1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");

	return 0;
}