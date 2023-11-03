#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int data[20];
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (int i = 0; i < 20; i++) {
		data[i] = (i + 1) * num;
	}

	for (int i = 0; i < 20; i++) {
		printf("%5d", data[i]);
		if (i == 4 || i == 9 || i == 14 || i == 19)
			printf("\n");
	}

	return 0;
}