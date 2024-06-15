#include<stdio.h>
int main(){
int n;
printf("enter the number : ");
scanf("%d",&n);
int fibo=1;
for(int i=1;i<=n;i++){
    fibo*=i;
}
printf("%d ! = %d",n,fibo);
    return 0;
}