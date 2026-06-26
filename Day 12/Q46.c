#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int temp = n, digits = 0;
    int sum = 0;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        sum += (int)pow(digit, digits);
        temp /= 10;
    }

    return sum == n;
}

int main() {
    int n;
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}