#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int incomes[7];
	int max = -100;

	for (int i = 0; i < 7; i++) {
		printf("Enter the income: ");
		scanf("%d", &incomes[i]);
	}

	for (int i = 0; i < 7; i++) {
		if (incomes[i] > max)
			max = incomes[i];
	}

	printf("The best income is %d\n", max);
	printf("Incomes are ");
	
	for (int i = 0; i < 7; i++) {
		printf("%d ", incomes[i]);
	}
	printf("\n");

	return 0;
}