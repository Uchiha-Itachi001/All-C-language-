#include<stdio.h>
#include<math.h>
int main(){
int n,m;
printf("enter the lower : ");
scanf("%d",&n);

printf("enter the uppe : ");
scanf("%d",&m);
int max=(m>n)?m:n;
int i=max;
do{
    if(i%n==0&&i%m==0){
        printf("the LCM =%d ",i);
        break;
    }
    i++;
}while(i<=n*m);
return 0;}