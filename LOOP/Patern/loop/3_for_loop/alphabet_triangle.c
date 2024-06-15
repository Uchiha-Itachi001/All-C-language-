#include<stdio.h>
int main(){
    int n;
    printf("entert the number : ");
    scanf("%d",&n);
    int nsp = n,nst = 1;
for(int i=0;i<n;i++){

    for(int j=0;j<nsp;j++){
        printf("  ");
    }
    char a = 'A';
    for(int k=0;k<nst;k++){
        printf("%c ",a);
        a++;
    }
   printf("\n");
    nst++;
    nsp--;
}


    return 0;
}