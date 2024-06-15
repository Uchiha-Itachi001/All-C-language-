#include<stdio.h>

void pip(int n);

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    
    pip(n);

    return 0;
}
void pip(int n){
    if(n==0) return ;
    printf("pre : %d \n",n);
    pip(n-1);
    printf("in : %d \n",n);
    pip(n-1);
    printf("post : %d \n",n);
    
}