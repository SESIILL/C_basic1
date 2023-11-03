#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

void printArray(int a[], int size);
int equalArray(int a[], int b[], int size);

int main(void) {
	int arrayA[SIZE] = { 1, 2, 3, 4, 1 };
	int arrayB[SIZE];
	int arrayC[SIZE];
	int i;

	for (i = 0; i < SIZE; i++) {
		arrayB[i] = arrayA[i];
		arrayC[5 - i - 1] = arrayB[i];
	}

	printArray(arrayA, SIZE);
	printArray(arrayB, SIZE);
	printArray(arrayC, SIZE);

	if (equalArray(arrayA, arrayB, SIZE) == 1)
		printf("arrayA와 arrayB는 같다.\n");
	else
		printf("arrayA와 arrayB는 다르다.\n");

	if (equalArray(arrayA, arrayC, SIZE) == 1)
		printf("arrayA와 arrayC는 같다.\n");
	else
		printf("arrayA와 arrayC는 다르다.\n");

	return 0;
}

void printArray(int a[], int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
	return;
}

int equalArray(int a[], int b[], int size) { // flag 변수 없이 작성
	int i;
	for (i = 0; i < size; i++) {
		if (a[i] != b[i])
			return 0;
	}
	return 1;
}