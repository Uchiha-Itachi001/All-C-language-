#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
int c=0,r,s=0;
float p;
for(int i=n;i>0;i=i/10){
    c++;
}
for(int i=n;i>0;i=i/10){
    r=i%10;
    p=pow(r,c);
    s+=p;
}
if(s==n)printf("%d was a armstrong number ",n);
else printf("%d not a armstrong number ",n);


    return 0;
}