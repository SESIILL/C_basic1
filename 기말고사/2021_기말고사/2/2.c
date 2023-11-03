#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char s[20];
	char key;
	int len;
	int flag = 0;

	scanf("%s %c", s, &key);
	for (len = 0; s[len] != '\0'; len++);

	for (int i = 0; i < len; i++) {
		if (s[i] == key) {
			printf("%d\n", i + 1);
			flag = 1;
			break;
		}
	}

	if (flag == 0)
		printf("-1\n");

	return 0;
}