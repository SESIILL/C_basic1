#include <stdio.h>

int square2(int x);

int main(void) {
	int result;
	result = square2(5);
	printf("제곱은 %d\n", result);
	
	return 0;
}

int square2(int x) {
	return x * x;
}