#include <stdio.h>

int main() {
    int n, target, found = 0;

    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &target);

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("Pair: %d %d", arr[i], arr[j]);
                found = 1;
                break;
            }
        }
        if(found)
            break;
    }

    if(!found)
        printf("No Pair Found");

    return 0;
}