#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, temp, rem;
    long long product = 1;

    printf("Enter any integer number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    temp = abs(num);

    // Special case for 0
    if (temp == 0) {
        product = 0;
    } else {
        while (temp > 0) {
            rem = temp % 10;      
            product = product * rem; 
            temp = temp / 10;     
        }
    }

    printf("The product of the digits of %d is: %lld\n", num, product);

    return 0;
}