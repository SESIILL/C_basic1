#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int arr[20], a[20], b[20];
    int n, i;
    int aIndex = 0;
    int bIndex = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            a[aIndex] = arr[i];
            aIndex++;
        }
        else if (arr[i] % 2 == 1) {
            b[bIndex] = arr[i];
            bIndex++;
        }
    }

    for (i = 0; i < aIndex; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    for (i = 0; i < bIndex; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}