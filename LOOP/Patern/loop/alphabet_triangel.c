#include<stdio.h>
int main(){
    int n;
    printf("enter vthe number : ");
    scanf("%d",&n);
for(int i=1;i<=n;i++){
    char a='A';
    for(int j=1;j<=n-i;j++){
        printf("  ");
    }
    for(int k=1;k<=i;k++){
        printf("%c ",a);
        a++;
    }
    printf("\n");
    }
    return 0;
}