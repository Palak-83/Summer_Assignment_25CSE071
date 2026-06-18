#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next = 0;
    
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }

    printf("The %dth Fibonacci term is: %d\n", n, (n == 0) ? a : (n == 1) ? b : next);
    return 0;
}