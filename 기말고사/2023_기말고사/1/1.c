#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int num) {
    if (num == 0 || num == 1)
        return 0;

    for (int i = 2; i < num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main(void) {
    int n;
    int total = 0;

    n = 0;

    while (n != -1) {
        scanf("%d", &n);

        if (n == -1)
            break;

        if (isPrime(n) == 1)
            total += n;
    }

    printf("%d\n", total);

    return 0;
}