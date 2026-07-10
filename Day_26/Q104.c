#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("Q1. Capital of India?\n");
    printf("1.Delhi 2.Mumbai 3.Kolkata 4.Chennai\n");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("Q2. C language developed by?\n");
    printf("1.Dennis Ritchie 2.Bjarne Stroustrup 3.James Gosling 4.Guido\n");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("Q3. 2 + 2 = ?\n");
    printf("1.3 2.4 3.5 4.6\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("Final Score = %d/3\n", score);

    return 0;
}