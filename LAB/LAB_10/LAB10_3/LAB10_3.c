#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int tom, mary;
	printf("Tom's score? ");
	scanf("%d", &tom);
	printf("Mary's score? ");
	scanf("%d", &mary);

	printf("----------- Score Histogram -----------\n");
	printf("Tom\t: ");
	for (int i = 0; i < tom; i++) 
		printf("*");
	printf(" <%02d>\n", tom);

	printf("Mary\t: ");
	for (int i = 0; i < mary; i++) 
		printf("*");
	printf(" <%02d>\n", mary);

	return 0;
}