#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int money;
    printf("Enter 금액: ");
    scanf("%d", &money);

    for (int bread = 1; bread * 500 <= money; bread++) {
        for (int cookie = 1; cookie * 700 <= money; cookie++) { 
            for (int coke = 1; coke * 400 <= money; coke++) { 
                int total = bread * 500 + cookie * 700 + coke * 400; 
                if (total == money) { 
                    printf("빵: %d개 쿠키: %d개 콜라: %d개\n", bread, cookie, coke);
                }
            }
        }
    }

    return 0;
}