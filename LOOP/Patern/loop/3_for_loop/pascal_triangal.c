#include <stdio.h>

int fact(int n);
int comb(int n, int r);
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int k = 0; k <= n - i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", comb(i, j));
        }
        printf("\n");
    }
    return 0;
}
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}
int comb(int n, int r)
{
    int ncr = fact(n) / (fact(n - r) * fact(r));
    return ncr;
}