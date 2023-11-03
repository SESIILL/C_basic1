#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main(void) {
	srand(time(NULL));

	int num;
	int random[100];
	int total = 0;
	int avg = 0;

	printf("Enter the number of random numbers(<=100): ");
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		random[i] = rand() % 100;
		total += random[i];
	}

	avg = total / num;
	printf("난수의 평균은 %d\n", avg);

	printf("발생된 난수는\n");
	for (int i = 0; i < num; i++) {
		printf("%5d", random[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
	}
	printf("\n");

	return 0;
}