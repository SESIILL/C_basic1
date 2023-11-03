#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main(void) {
	int odd[SIZE], even[SIZE];
	int num;
	int i;
	int oddIndex = 0;
	int evenIndex = 0;

	for (i = 0; i < SIZE; i++) {
		printf("Enter a number: ");
		scanf("%d", &num);

		if (num % 2 == 1) {
			odd[oddIndex] = num;
			oddIndex++;
		}
		else {
			even[evenIndex] = num;
			evenIndex++;
		}
	}

	printf("\n홀수 출력: ");
	for (i = 0; i < oddIndex; i++)
		printf("%d ", odd[i]);

	printf("\n짝수 출력: ");
	for (i = 0; i < evenIndex; i++)
		printf("%d ", even[i]);
	printf("\n");
	
	return 0;
}