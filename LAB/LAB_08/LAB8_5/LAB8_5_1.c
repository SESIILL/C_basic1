// LAB8_5_1 경영학과 20200415 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int row, col;
	printf("Enter the number of rows: ");
	scanf("%d", &row);
	printf("Enter the number of columns: ");
	scanf("%d", &col);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}