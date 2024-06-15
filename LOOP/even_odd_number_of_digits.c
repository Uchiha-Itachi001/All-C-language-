#include<stdio.h>
int main(){
    int n;
    printf("enter the integer : ");
    scanf("%d",&n);
    int c=0;
for(int i=n;i>0;i=i/10){
    c++;
}
if(c%2==0)printf("the number %d is even(%d) number of digis",n,c);
else printf("the number %d is odd(%d) number of digis",n,c);

    return 0;
}