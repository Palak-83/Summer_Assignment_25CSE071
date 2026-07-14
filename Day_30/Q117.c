#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n;

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        scanf("%d", &s[i].roll);
        scanf("%s", s[i].name);
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Records\n");

    for(int i = 0; i < n; i++) {
        printf("%d %s %.2f\n",
               s[i].roll,
               s[i].name,
               s[i].marks);
    }

    return 0;
}