#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char a='A';
        for(int j=0;j<=n-i;j++){
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    return 0;}