#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    int found[256] = {0};

    for(int i = 0; str1[i] != '\0'; i++) {
        for(int j = 0; str2[j] != '\0'; j++) {
            if(str1[i] == str2[j] && !found[(unsigned char)str1[i]]) {
                printf("%c ", str1[i]);
                found[(unsigned char)str1[i]] = 1;
            }
        }
    }

    return 0;
}