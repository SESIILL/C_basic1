#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int key;
	scanf("%d", &key);

	int n = -100;
	int cnt1 = 0;
	int cnt2 = 0;
	int flag = 0;

	while (n != -1) {
		scanf("%d", &n);
		cnt1++;

		if (flag == 0 && key == n) {
			cnt2 = cnt1;
			flag = 1;
		}
	}

	if (cnt2 != 0)
		printf("%d\n", cnt2);
	else
		printf("not found\n");

	return 0;
}