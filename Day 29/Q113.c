#include <stdio.h>

int main() {
    int choice;
    float a, b;

    do {
        printf("\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 4) {
            printf("Enter Two Numbers: ");
            scanf("%f %f", &a, &b);
        }

        switch(choice) {
            case 1:
                printf("Result = %.2f\n", a + b);
                break;
            case 2:
                printf("Result = %.2f\n", a - b);
                break;
            case 3:
                printf("Result = %.2f\n", a * b);
                break;
            case 4:
                if(b != 0)
                    printf("Result = %.2f\n", a / b);
                else
                    printf("Division by zero not possible\n");
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 5);

    return 0;
}