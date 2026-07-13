#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    do {
        printf("\n1.Length\n2.Reverse\n3.Display\n4.Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Length = %lu\n", strlen(str) - 1);
                break;

            case 2: {
                int len = strlen(str);
                for(int i = len - 2; i >= 0; i--)
                    printf("%c", str[i]);
                printf("\n");
                break;
            }

            case 3:
                printf("%s", str);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}