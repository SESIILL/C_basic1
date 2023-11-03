#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y;
	scanf("%d %d", &x, &y);

	int n;
	int result = 0;
	int cnt1 = 0; // 10개의 정수를 입력받을 때 counting
	int cnt2 = 0; // x보다는 크고 y보다는 작을 때 counting

	while (cnt1 < 10) {
		scanf("%d", &n);

		if (n > x && n < y) { 
			result += n;
			cnt2++;
		}
		cnt1++;
	}
	printf("%d\n%d\n", result, cnt2);

	return 0;
}