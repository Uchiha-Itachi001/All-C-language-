#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int nsp= n,nst =1;
for(int i=0;i<n;i++){
    for(int j=0 ;j<nsp;j++){
        printf("  ");
    }

    for(int k=0;k<nst;k++){
        printf(" *");
    }
    printf("\n");
    nst++;
    nsp--;
}


    return 0;
}