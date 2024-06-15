#include<stdio.h>
int main()
{
    /* .............PASCAL TRAINGAL............*/
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int p=1;
        for(int j=0;j<=i;j++){
            printf("%d ",p);
            p = p*(i-j)/(j+1);
        }
        printf("\n");
    }


    return 0;
}