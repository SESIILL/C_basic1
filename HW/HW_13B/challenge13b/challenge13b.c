#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char word[81];
	int num = 0;
	int sum = 0;

	printf("Enter a word: ");
	scanf("%s", word);

	for (int i = 0; word[i] != '\0'; i++) {
		if (word[i] >= '1' && word[i] <= '9') { // 현재 문자가 숫자인 경우
			num = num * 10 + word[i] - 48;
		}
		else { // 현재 문자가 숫자가 아닌 경우
			sum += num; // 앞에서 만들어진 숫자 더해줌.
			num = 0; // num 초기화
		}
	}
	
	sum += num; // 배열의 마지막 인덱스에 숫자가 있으면 더해줌.
	
	printf("글자 안의 수 합은 %d\n", sum);

	return 0;
}