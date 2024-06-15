#include<stdio.h>

void print(int n);

int main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);

    print(n);

    return 0;
}

void print(int n){
    if(n==0)return;
    print(n-1);
    printf("%d\n",n);
}