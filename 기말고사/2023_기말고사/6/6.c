#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void changeString(char str[]) { // 소문자 변경
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
}

int getLength(char str[]) { // 문자열 길이 반환
    int i;
    for (i = 0; str[i] != '\0'; i++);
    return i;
}

int isPalindrome(char str[]) {
    int len = getLength(str);

    if (len < 5)
        return 0;

    for (int i = 0; i < len; i++) {
        if (str[i] != str[len - i - 1])
            return 0;
    }
    return 1;
}

int isContainedPasswd(char str[], char new[]) {
    int strLen = getLength(str);
    int newLen = getLength(new);
    int j = 0;
    int start = 0; // 시작 인덱스

    for (int i = 0; i < newLen; i++) {
        if (new[i] == str[j]) {
            j++;
        }
        if (j == strLen) {
            return i - j + 1;
        }
    }
}

int main(void) {
    char str[20], new[20];

    scanf("%s", str);
    changeString(str);

    if (isPalindrome(str) == 0) {
        printf("-1 %d\n", getLength(str));
    }
    else {
        scanf("%s", new);
        changeString(new);
        int start = isContainedPasswd(str, new);
        for (int i = 0; i < getLength(new); i++) {
            if (i == start)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }

    return 0;
}