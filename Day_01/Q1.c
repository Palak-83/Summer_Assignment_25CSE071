#include <stdio.h>

int main() {
    int n;
    int sum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Error: Please enter a natural number greater than or equal to 1.\n");
        return 1;
    }

    
    sum = (n * (n + 1)) / 2;

    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
