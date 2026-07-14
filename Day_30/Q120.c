#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void display(struct Student s[], int n) {
    printf("\nStudent Records\n");

    for(int i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n",
               s[i].roll,
               s[i].name,
               s[i].marks);
    }
}

int main() {
    int n;

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(int i = 0; i < n; i++) {
        printf("\nEnter Roll, Name and Marks: ");
        scanf("%d %s %f",
              &s[i].roll,
              s[i].name,
              &s[i].marks);
    }

    display(s, n);

    return 0;
}