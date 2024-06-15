#include<stdio.h>

int power (int n,int m);

int main()
{
    int n,m;
    printf("enter the base : ");
    scanf("%d",&n);
    printf("enter the poewr : ");
    scanf("%d",&m);

    printf("%d^%d is : %d",n,m,power(n,m));

    return 0;
}
int power (int n,int m){
    if(m==0)return 1;
    if(m==1) return n;
    int x = power(n,m/2);
    if(m%2==0){
        return x * x;
    }
    else return n * x * x;
}