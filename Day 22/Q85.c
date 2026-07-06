#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int flag = 1;

    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    if(str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}