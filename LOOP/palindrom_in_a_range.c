#include<stdio.h>
int main(){
    
int n,m;
printf("enter the lower limits : ");
scanf("%d",&n);
printf("enter the upper limit : ");
scanf("%d",&m);
int i=n;
while(i<=m){
    int j=i,r,s=0;
    while(j>0){
        r=j%10;
        s=s*10+r;
        j=j/10;
        }
if(i==s)printf("%d is palindrom\n",i);
i++;

}


    
return 0;
}