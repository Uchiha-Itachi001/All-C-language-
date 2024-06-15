#include <stdio.h>

int main() {
    FILE *file1, *file2;
    char ch1, ch2;

    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");

    if (file1 == NULL) {
        printf("Cannot open file1.txt for reading.\n");
        return 1;
    } else if (file2 == NULL) {
        printf("Cannot open file2.txt for reading.\n");
        return 1;
    }

    ch1 = getc(file1);
    ch2 = getc(file2);

    while ((ch1 != EOF) && (ch2 != EOF) && (ch1 == ch2)) {
        
        ch1 = getc(file1);
        ch2 = getc(file2);
    }

    if (ch1 == ch2)
        printf("Files are identical.\n");
    else 
        printf("Files are not identical.\n");

    fclose(file1);
    fclose(file2);

    return 0;
}
