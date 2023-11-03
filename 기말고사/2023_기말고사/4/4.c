#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n;
    int reverse = 0;

    scanf("%d", &n);

    do {
        reverse = (reverse * 10) + (n % 10);
        n /= 10;
    } while (n != 0);

    printf("%d\n", reverse);
    printf("%d\n", reverse * 3);

    return 0;
}