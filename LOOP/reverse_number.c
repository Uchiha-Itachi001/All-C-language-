#include<stdio.h>
int main(){
    int n;
    printf("enter the value : ");
    scanf("%d",&n);
    int p=0,r;
for(int i=n;i>0;i=i/10){
    r=i%10;
    p=p*10+r;
}
printf("the revarce of %d is : %d",n,p);

    return 0;
}