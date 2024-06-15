#include<stdio.h>
#include<math.h>
int main(){
int n,m;
printf("enter the lower : ");
scanf("%d",&n);

printf("enter the uppe : ");
scanf("%d",&m);
 int i=n;
    while(i<=m){
int k=i,c=0;
        while(k>0){
            c++;
            k=k/10;}

int j=i,r,s=0;
 float p;
        while(j>0){
                r=j%10;
                p=pow(r,c);
                s=s+p;
              j=j/10;}

if(s==i)printf("%d is a armstrong number\n",i);
        i++;
    }

    return 0;
}