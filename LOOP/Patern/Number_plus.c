#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int p=(n/2)+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==p||j==p)printf("* ");
            else printf("  ");}
            printf("\n");
            }
    return 0;}