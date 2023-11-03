#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculatePoint(char s[]) {
	int point = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z')
			point += s[i] - 64;
		else 
			point += s[i] - 96;
	}
	return point;
}

int main(void) {
	char str[20];

	printf("단어를 입력하세요(빈칸없이): ");
	scanf("%s", str);
	printf("점수는 %d\n", calculatePoint(str));

	return 0;
}