#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char s[20], r_s[20];
    char key;
    int i, len;
    int flag = 0;

    scanf("%s %c", s, &key);

    for (len = 0; s[len] != '\0'; len++); // s의 길이

    for (i = 0; i < len; i++) {
        r_s[i] = s[len - i - 1];
    }
    r_s[len] = '\0';

    printf("%s\n", r_s);

    for (i = 0; i < len; i++) {
        if (r_s[i] == key) {
            printf("%d\n", i + 1);
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("-1\n");

    return 0;
}