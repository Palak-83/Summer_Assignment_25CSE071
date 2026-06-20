#include <stdio.h>

int main() {
    long long binary;
    int decimal = 0, base = 1, digit;

    scanf("%lld", &binary);

    while (binary > 0) {
        digit = binary % 10;
        decimal += digit * base;
        base *= 2;
        binary /= 10;
    }

    printf("%d", decimal);

    return 0;
}