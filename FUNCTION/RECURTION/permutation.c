#include<stdio.h>

int fact(int n);

int main()
{
    int n,r;
    printf("enter the n and r : ");
    scanf("%d%d",&n,&r);
    int npr = fact(n)/fact(n-1);
    printf("The permutation is %d",npr);


    return 0;
}

int fact(int n){
    if(n==1 || n==0) return 1;
    return n * fact(n-1);
}