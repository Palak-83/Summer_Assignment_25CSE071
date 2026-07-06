#include <stdio.h>

int main() {
    long long x, n, result = 1;

    scanf("%lld %lld", &x, &n);

    for (long long i = 1; i <= n; i++)
        result *= x;

    printf("%lld", result);

    return 0;
}