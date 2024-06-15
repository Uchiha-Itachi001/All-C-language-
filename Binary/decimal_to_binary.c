#include <stdio.h>
void decToBinary(int n)
{
    // array to store binary digits
    int binaryNum[32];

    int i = 0;
    // loop to convert decimal to binary
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    // print binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}
int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    decToBinary(n);
    return 0;
}
