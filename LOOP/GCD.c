#include<stdio.h>
#include<math.h>
int main(){
int n,m;
printf("enter the lower : ");
scanf("%d",&n);

printf("enter the uppe : ");
scanf("%d",&m);
int min=(m>n)?n:m;
int i=min;
do{
    if(n%i==0&&m%i==0){
        printf("the GCD =%d ",i);
        break;
    }
    i--;
}while(i<=n*m);
return 0;}