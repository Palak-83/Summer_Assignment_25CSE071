#include <stdio.h>

struct Book {
    int id;
    char title[50];
};

int main() {
    int n;

    scanf("%d", &n);

    struct Book b[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &b[i].id);
        scanf("%s", b[i].title);
    }

    printf("Library Records\n");

    for(int i = 0; i < n; i++)
        printf("%d %s\n", b[i].id, b[i].title);

    return 0;
}