#include <stdio.h>

int main() {
    int n, choice;

    printf("Enter Array Size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter Elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do {
        printf("\n1.Display\n2.Sum\n3.Maximum\n4.Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                for(int i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 2: {
                int sum = 0;
                for(int i = 0; i < n; i++)
                    sum += arr[i];
                printf("Sum = %d\n", sum);
                break;
            }

            case 3: {
                int max = arr[0];
                for(int i = 1; i < n; i++)
                    if(arr[i] > max)
                        max = arr[i];
                printf("Maximum = %d\n", max);
                break;
            }

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}