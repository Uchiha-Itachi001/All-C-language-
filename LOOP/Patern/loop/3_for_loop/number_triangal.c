#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int nst =1,nsp=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<nsp;j++){
            printf("  ");
        }
        for(int k=0;k<nst;k++){
            printf("%d ",k+1);
        }
        printf("\n");
        nsp--;
        nst++;
    }
    return 0;
}