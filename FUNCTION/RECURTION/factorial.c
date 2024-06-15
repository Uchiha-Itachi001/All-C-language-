#include<stdio.h>

int fact(int n);

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    
    printf("factorial of %d ! is = %d",n,fact(n));

    return 0;
}

int fact(int n){
    if(n==0 || n==1)return 1;
    return  n* fact(n-1); 
}