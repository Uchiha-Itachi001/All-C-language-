#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        char b='A';
     for(int j=1;j<=i;j++){
        if(i%2==0){printf("%c ",b);
            b++;}
         else {printf("%d ",a);
            a++;}
        }
        printf("\n");
    }
    return 0;}