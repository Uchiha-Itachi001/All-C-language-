        
#include <stdio.h>

void removeExtraSpaces(char* str) {
    int i = 0, j = 0;
    while (str[i]) {
        if (str[i] != ' ' || (i > 0 && str[i-1] != ' ')) {
            str[j] = str[i];
            j++; 
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    char str[1000];
    gets(str);
    printf("Original string: %s\n", str);
    removeExtraSpaces(str);
    printf("Modified string: %s\n", str);
    return 0;
}
