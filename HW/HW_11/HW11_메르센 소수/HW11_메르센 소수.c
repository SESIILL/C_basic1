#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long twoToThePower(int n) {
    long long result = 1;
    for (int i = 0; i < n; i++)
        result *= 2;
    return result;
}

int isPrime(long long x) {
    for (long long i = 2; i < x; i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        long long m = twoToThePower(i) - 1;
        if (isPrime(m) == 1) {
            printf("(2^%d - 1) = %lld은 메르센 소수이다.\n", i, m);
        }
    }

    return 0;
}