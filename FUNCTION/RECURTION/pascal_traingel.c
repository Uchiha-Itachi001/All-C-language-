#include<stdio.h>
int combi(int n,int r);
int  fact(int n);
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int nsp = (n-1),nst = 1;
    for(int i=0;i<n;i++){
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }

        for(int k=0;k<nst;k++){
           printf("%d   ",combi(i,k));
        }
    nst++;
    nsp--;
    printf("\n");

    }


    return 0;
}

int combi(int n,int r){
    int ncr = fact(n)/(fact(n-r)*fact(r));
    return ncr;
}
int fact(int n){
    if(n==1 || n==0) return 1;
    return n * fact(n-1);
}