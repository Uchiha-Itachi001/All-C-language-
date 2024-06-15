#include<stdio.h>
#include<math.h>
int main(){
   int n,m;
    printf("enter the lower limits  : ");
    scanf("%d",&n);
    printf("enter the upper limits  : ");
    scanf("%d",&m);
    for(int i=n;i<=m;i++){
        int c=0,r,s=0,k=0;
        float p;
        //count
        for(int j=i;j>0;j=j/10){
            c++;}
        //finbonaci or not 
        for(int j=i;j>0;j=j/10){
            r=j%10;
            p=pow(r,c);
            s+=p;}
 if(s==i){
                for(int j=2;j<=i-1;j++){
                    if(i%j==0){k=1;}
                }
                if(k==0)printf("%d is prime\n",i);
                else {printf("%d is non-prime\n",i);}
            
         }
    }

    return 0;
}