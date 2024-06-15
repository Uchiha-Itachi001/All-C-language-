#include <stdio.h>

int main()
{
    int n;
    printf("enter the number prime number  : ");
    scanf("%d", &n);
    int nst=0;
    
    for(int i=1;i<=n;i++){
        
        int p =1;
        for(int k=1;k<=n-i;k++){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",p);
        p++;
        }
        p-=2;
        for(int l=1;l<=nst;l++){
            printf("%d ",p);
        p--;
        }
        nst++;
        printf("\n");
    }

    return 0;
}