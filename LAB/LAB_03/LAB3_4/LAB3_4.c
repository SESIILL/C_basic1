// 경영학과 20200145 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int base, height;

	printf("밑변과 높이를 입력하세요: ");
	scanf("%d %d", &base, &height);
	int area = (base * height) / 2;

	printf("밑변과 높이가 각각 %d와 %d인 삼각형의 넓이는 %d이다.\n", base, height, area);

	return 0;
}
