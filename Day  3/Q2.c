#include <stdio.h>
#include <math.h>

int isPrime(int num)
{

    if (num <= 1)
    {
        return 0;
    }

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int lower, upper;

    printf("Enter lower bound of the range: ");
    scanf("%d", &lower);
    printf("Enter upper bound of the range: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    for (int i = lower; i <= upper; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}