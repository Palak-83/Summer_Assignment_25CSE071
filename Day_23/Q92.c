#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != '\n')
            freq[(unsigned char)str[i]]++;
    }

    int max = 0;
    char ch;

    for(int i = 0; i < 256; i++) {
        if(freq[i] > max) {
            max = freq[i];
            ch = i;
        }
    }

    printf("Maximum Occurring Character = %c", ch);

    return 0;
}