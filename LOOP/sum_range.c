#include<stdio.h>
int main(){
    int n,m;
    printf("enter the lower limits : ");
    scanf("%d",&n);
    printf("enter the upper limit : ");
    scanf("%d",&m);
    int sum=0;
for(int i=n;i<=m;i++){
    sum+=i;
}
printf("the sum of all numbers %d to %d is : %d ",n,m,sum);
    return 0;
}