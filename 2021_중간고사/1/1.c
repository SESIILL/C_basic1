#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int month;
	scanf("%d", &month);

	if (month >= 1 && month <= 12) {
		switch (month) {
		case 1:
			printf("31\n");
			break;
		case 2:
			printf("28\n");
			break;
		case 3:
			printf("31\n");
			break;
		case 4:
			printf("30\n");
			break;
		case 5:
			printf("31\n");
			break;
		case 6:
			printf("30\n");
			break;
		case 7:
			printf("31\n");
			break;
		case 8:
			printf("31\n");
			break;
		case 9:
			printf("30\n");
			break;
		case 10:
			printf("31\n");
			break;
		case 11:
			printf("30\n");
			break;
		case 12:
			printf("31\n");
			break;
		}
	}
	else
		printf("invalid month\n");

	return 0;
}