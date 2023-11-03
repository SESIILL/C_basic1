#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int incomes[12] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 };
	int s;
	int month = -10;

	printf("탐색할 수입은? ");
	scanf("%d", &s);

	for (int i = 0; i < 12; i++) {
		if (s == incomes[i]) {
			month = i + 1;
			break;
		}
	}

	if (month == -10)
		printf("수입 %d를 갖는 달은 없습니다.\n", s);
	else
		printf("수입 %d를 갖는 첫 번째 달은 %d월입니다.\n", s, month);
	
	return 0;
}