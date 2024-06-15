#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    puts("enter the string : ");
    gets(str);
    puts("the abbrivation of the string is : ");
    printf("%c",str[0]);
    int len = strlen(str);
    int i;
    for (i = 0; i < len; i++) {
        if (str[i] == ' ') {
            printf("%c", str[i + 1]);
        }
    }
    return 0;
}
