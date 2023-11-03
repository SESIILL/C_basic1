#include <stdio.h> 

void print5Chars(char ch); // 함수의 원형

int main(void) {
	print5Chars('*'); // 함수의 호출
	print5Chars('+'); // 함수의 호출
	print5Chars('1'); // 함수의 호출

	return 0;
}

void print5Chars(char ch) {
	int i;
	int num = 5;

	for (int i = 0; i < 5; i++)
		printf("%c", ch);
	printf("\n");

	return;
}