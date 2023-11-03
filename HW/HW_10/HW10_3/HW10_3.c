#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printManyStars(int starNum);

int main(void) {
	int tom, mary;
	
	printf("Tom's score? ");
	scanf("%d", &tom);
	printf("Mary's score? ");
	scanf("%d", &mary);

	printf("----------- Score Histogram -----------\n");
	printf("Tom\t: ");
	printManyStars(tom);
	printf(" <%02d>\n", tom);

	printf("Mary\t: ");
	printManyStars(mary);
	printf(" <%02d>\n", mary);

	return 0;
}

void printManyStars(int starNum) {
	for (int i = 0; i < starNum; i++)
		printf("*");
	return;
}