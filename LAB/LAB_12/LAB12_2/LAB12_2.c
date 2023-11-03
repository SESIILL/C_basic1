#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));

	int data[10];
	int total = 0;
	int avg = 0;

	for (int i = 0; i < 10; i++) {
		data[i] = rand() % 100;
	}

	for (int i = 0; i < 10; i++) {
		total += data[i];
	}
	
	avg = total / 10;
	printf("평균은 %d\n", avg);

	for (int i = 0; i < 10; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");

	return 0;
}