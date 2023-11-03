// HW8_4_1 경영학과 20200415 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 9; j++) {
			if (j % 2 == 0)
				printf("%d * %d = %d\t", i, j, (i * j));
		}
		printf("\n");
	}

	return 0;
}