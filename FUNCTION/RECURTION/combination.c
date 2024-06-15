#include<stdio.h>

int fact(int n);

int main()
{
    int n,r;
    printf("enter the n and r : ");
    scanf("%d%d",&n,&r);
   int ncr= fact(n)/(fact(r)*fact(n-r));
    printf("the combination is %d",ncr);

    return 0;
}

int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n * fact(n-1);
}