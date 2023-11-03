#include <stdio.h>

int main(void) {
	int i;
	
	// 1) 문자열을 정의하는 여러 가지 방법들
	char digits[] = "012345689";
	char abc[] = { 'A', 'B', 'C', '\0' };
	char lan[5] = "Java";

	// 2) 출력 결과는?
	printf("%s %s\n", digits, abc);

	// 3) 아래처럼 lan 문자열 변수를 두 가지 방법으로 출력할 수 있다.
	printf("%s\n", lan);
	for (i = 0; lan[i] != '\0'; i++) {
		printf("%c", lan[i]);
	}
	printf("\n");

	// digits[]의 중간에 널 문자를 삽입하면 문자열이 끝남.
	digits[6] = '\0';
	printf("%s\n", digits);

	return 0;
}