#include <stdio.h>

int fact(int n);

int main()
{
    int x, i;
    printf("Enter a value for x: ");
    scanf("%d", &x);
    i = fact(x);
    printf(" Factorial of %d is %d",x,i);
    return 0;
}

int fact(int n)
{
    if (n <= 0)
    {
        return (1);
    }
    else
    {
        return (n * fact(n - 1));
    }
}