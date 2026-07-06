#include <stdio.h>

int main() {
    int n, key, found = 0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d", i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Element not found");

    return 0;
}