#include<stdio.h>
#include<math.h>

int main() {
    int binary, decimal = 0, remainder, count = 0;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while(binary != 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * pow(2, count);
        binary = binary / 10;
        count++;
    }

    printf("Equivalent decimal number is: %d\n", decimal);

    return 0;
}
