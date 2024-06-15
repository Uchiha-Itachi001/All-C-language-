#include<stdio.h>
int main(){
    int n,m;
    printf("enter thr row number : ");
    scanf("%d",&n);
    int arr[n][4];
    for(int i=0;i<n;i++){
        for(int j=0;j<=3;j++){
            printf("enter the %d rows %d element : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=3;j++){
            printf("%d ",arr[i][j]);
        }
printf("\n");    }
    return 0;
}