#include <stdio.h>

int main() {
    float basic, hra, da, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = 0.20 * basic;
    da = 0.10 * basic;

    gross = basic + hra + da;

    printf("Gross Salary = %.2f", gross);

    return 0;
}