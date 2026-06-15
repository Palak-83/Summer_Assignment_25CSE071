 #include <stdio.h>

int main() {
    long long num;
    int count = 0;

    
    printf("Enter an integer: ");
    scanf("%lld", &num);

    
    long long temp = num;

    
    do {
        temp /= 10;
        count++;
    } while (temp != 0);

    printf("Number of digits in %lld is: %d\n", num, count);

    return 0;
}