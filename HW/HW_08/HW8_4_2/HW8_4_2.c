// HW8_4_2 경영학과 20200415 손채연
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i = 1;
	int j = 2;

	while (i < 10) {
		j = 2;
		while (j < 9) {
			if (j % 2 == 0) 
				printf("%d * %d = %d\t", i, j, (i * j));
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}