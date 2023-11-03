// HW8_1 경영학과 20200415 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int dan;
	printf("몇 단을 연습하시겠습니까?: ");
	scanf("%d", &dan);

	int result;
	int count = 0;

	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = ", dan, i);
		scanf("%d", &result);

		if (result == (dan * i))
			count++;
	}
	printf("%d단의 구구단에서 %d개를 맞았습니다.\n", dan, count);

	return 0;
}