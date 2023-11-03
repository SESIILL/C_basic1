#include <stdio.h>

int pow(int a, int b);

int main(void) {
	for(int i=0; i<=10; i++)
		printf("%d ^ %d == %d\n", 5, i, pow(5, i));	
	return 0;
}

int pow(int a, int b) {
	int result = 1;
	for (int i = 0; i < b; i++)
		result *= a;

	return result;
}