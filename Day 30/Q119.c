#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n;

    scanf("%d", &n);

    struct Employee e[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &e[i].id);
        scanf("%s", e[i].name);
        scanf("%f", &e[i].salary);
    }

    printf("Employee Records\n");

    for(int i = 0; i < n; i++) {
        printf("%d %s %.2f\n",
               e[i].id,
               e[i].name,
               e[i].salary);
    }

    return 0;
}