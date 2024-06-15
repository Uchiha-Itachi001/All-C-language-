#include<stdio.h>

int stair(int n);

int main()
{
    int n;
    printf("enter the number of stairs :");
    scanf("%d",&n);

    printf("Total number of way is : %d",stair(n));

    return 0;
}
int stair(int n){
    if(n==1 || n==2) return n;
    if(n==3) return n+1;
    return stair(n-1) + stair(n-2) + stair(n-3);
}