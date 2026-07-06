#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    char names[n][50], temp[50];

    for(int i = 0; i < n; i++)
        fgets(names[i], sizeof(names[i]), stdin);

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Sorted Names:\n");

    for(int i = 0; i < n; i++)
        printf("%s", names[i]);

    return 0;
}