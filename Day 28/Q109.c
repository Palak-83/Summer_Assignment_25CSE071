#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Title: ");
    scanf("%s", b.title);

    printf("Enter Author: ");
    scanf("%s", b.author);

    printf("\nBook Details\n");
    printf("ID: %d\n", b.id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);

    return 0;
}