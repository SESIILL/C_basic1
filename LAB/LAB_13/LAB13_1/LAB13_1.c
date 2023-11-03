#define SIZE 5
#include <stdio.h>

int main(void) {
	int arrayA[SIZE] = { 1, 2, 3, 4, 1 };
	int arrayB[SIZE];
	int arrayC[SIZE];
	int i;
	int same;

	for (i = 0; i < SIZE; i++) {
		arrayB[i] = arrayA[i];
		arrayC[SIZE - i - 1] = arrayA[i];
	}

	printf("arrayA: ");
	for (i = 0; i < SIZE; i++) 
		printf("%d ", arrayA[i]);
	printf("\n");

	printf("arrayB: ");
	for (i = 0; i < SIZE; i++) 
		printf("%d ", arrayB[i]);
	printf("\n");

	printf("arrayC: ");
	for (i = 0; i < SIZE; i++) 
		printf("%d ", arrayC[i]);
	printf("\n");

	same = 1;
	for (i = 0; i < SIZE; i++) {
		if (arrayA[i] != arrayB[i]) {
			same = 0;
			break;
		}
	}

	if (same == 1)
		printf("ArrayA와 arrayB는 같다.\n");
	else
		printf("ArrayA와 arrayB는 다르다.\n");

	same = 1;
	for (i = 0; i < SIZE; i++) {
		if (arrayA[i] != arrayC[i]) {
			same = 0;
			break;
		}
	}

	if (same == 1)
		printf("ArrayA와 arrayC는 같다.\n");
	else
		printf("ArrayA와 arrayC는 다르다.\n");

	return 0;
}