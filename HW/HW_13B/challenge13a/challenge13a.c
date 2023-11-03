#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char first[81];
	char second[81];

	printf("Enter the first word: ");
	scanf("%s", first);
	printf("Enter the second word: ");
	scanf("%s", second);

	int flag = 0;
	int len1, len2;

	for (len1 = 0; first[len1] != '\0'; len1++);
	for (len2 = 0; second[len2] != '\0'; len2++);

	if (len1 == len2 || len1 > len2) {
		for (int i = 0; i < len1; i++) {
			if (first[i] != second[i]) {
				flag = 1;
				break;
			}
		}
	}
	else if (len1 < len2) {
		for (int i = 0; i < len2; i++) {
			if (first[i] != second[i]) {
				flag = 1;
				break;
			}
		}
	}

	if (flag == 1)
		printf("두 단어는 다르다.\n");
	else
		printf("두 단어는 같다.\n");

	return 0;
}