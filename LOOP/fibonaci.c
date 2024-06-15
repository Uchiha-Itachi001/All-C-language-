#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
int a=0,b=1,c;
printf("%d %d ",a,b);
for(int i=1;i<=n-2;i++){
    c=a+b;
    a=b;
    b=c;
    printf(" %d",c);
}
  return 0;
}