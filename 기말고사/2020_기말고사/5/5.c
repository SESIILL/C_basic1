#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int checking(char w0[], char w[]) {
	int len, i;
	for (len = 0; w[len] != '\0'; len++);

	if (len >= 5) {
		for (i = 0; i < 5; i++) {
			if (w0[i] != w[i])
				return 0;
		}
	}
	else { // apple 자체가 없음
		return 0;
	}
	return 1;
}

int main(void) {
	char w0[6] = "apple";
	char w1[81], w2[81], w3[81];

	scanf("%s %s %s", w1, w2, w3);

	printf("%d", checking(w0, w1));
	printf("%d", checking(w0, w2));
	printf("%d", checking(w0, w3));
	printf("\n");

	return 0;
}