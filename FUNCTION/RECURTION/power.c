#include<stdio.h>

int powr(int n,int m);

int main()
{
    int n,m;
    printf("enter the base :");
    scanf("%d",&n);
    printf("enter the power :");
    scanf("%d",&m);

    printf("The power of %d^%d is  : %d",n,m,powr(n,m));

    return 0;
}
int powr(int n,int m){
    if(m==0)return 1;
    if(m==1)return n;
    return n * powr(n,m-1);
}