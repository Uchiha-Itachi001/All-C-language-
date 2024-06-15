#include<stdio.h>
int main(){
int n;
printf("enter the number : ");
scanf("%d",&n);
int sum =0;
for(int i=1;i<=n;i++){
    sum+=i;
}
printf("sum of all the integer 1 to %d is :%d",n,sum);
    return 0;
}