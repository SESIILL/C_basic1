#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define SIZE 3

void printArray(int a[], int size);
int equalArray(int a[], int b[], int size);
void generateArray(int a[], int size);

int main(void) {
	int arrayA[SIZE], arrayB[SIZE];
	int count = 0;
	srand(time(NULL));
	
	do {
		printf("%d번째 시도\n", ++count);
		generateArray(arrayA, SIZE);
		generateArray(arrayB, SIZE);
		printArray(arrayA, SIZE);
		printArray(arrayB, SIZE);
		equalArray(arrayA, arrayB, SIZE);
		printf("\n");
	} while (!equalArray(arrayA, arrayB, SIZE));

	return 0;
}

void generateArray(int a[], int size) {
	int i;
	for (i = 0; i < size; i++)
		a[i] = rand() % 2;
	return;
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