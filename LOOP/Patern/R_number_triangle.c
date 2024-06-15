#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=0;j<=n-i;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;}