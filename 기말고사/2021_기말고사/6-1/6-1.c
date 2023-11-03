#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int money[4];
	int max = -1;
	int min = 100;
	int maxIndex, minIndex, index1, index2;
	int t1, t2;

	for (int i = 0; i < 4; i++) // 판돈 입력받기
		scanf("%d", &money[i]);

	for (int i = 0; i < 4; i++) { 
		if (max < money[i]) {
			max = money[i];
			maxIndex = i;
		}
	}

	for (int i = 0; i < 4; i++) { 
		if (min > money[i]) {
			min = money[i];
			minIndex = i;
		}
	}

	for (int i = 0; i < 4; i++) {
		if (i != minIndex && i != maxIndex)
			index1 = i;
	}

	for (int i = 0; i < 4; i++) {
		if (i != minIndex && i != maxIndex && i != index1)
			index2 = i;
	}

	t1 = money[maxIndex] + money[minIndex]; // 80
	t2 = money[index1] + money[index2]; // 70
	
	int d = t1 - t2;
	if (d < 0)
		d *= -1;

	money[maxIndex] += d;
	money[minIndex] += d;
	money[index1] -= d;
	money[index2] -= d;

	for (int i = 0; i < 4; i++)
		printf("%d ", money[i]);
	printf("\n");

	return 0;
}