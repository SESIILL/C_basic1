// LAB8_5_2 경영학과 20200415 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int row, col;
	printf("Enter the number of rows: ");
	scanf("%d", &row);
	printf("Enter the number of columns: ");
	scanf("%d", &col);

	int i = 0;
	int j = 0;
	while (i < row) {
		j = 0; // 증가한 j를 다시 0으로 초기화
		while (j < col) {
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}