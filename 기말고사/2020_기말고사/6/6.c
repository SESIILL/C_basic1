#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_word_in_word(char w1[], int start, char w2[]) {
	int len2;
	int flag = 1;

	for (len2 = 0; w2[len2] != '\0'; len2++); // 3

	for (int i = 0; i < len2; i++) {
		if (w1[start] != w2[i]) {
			flag = 0;
			break;
		}
		else
			start++;
	}
	
	if (flag == 1)
		return 1;
	else
		return 0;
}

int main(void) {
	char s1[20], s2[20];
	int i, j;

	scanf("%s", s1);
	scanf("%s", s2);
	
	for (i = 0; s1[i] != '\0'; i++) {
		printf("%d", is_word_in_word(s1, i, s2));
	}	
	printf("\n");

	return 0;
}