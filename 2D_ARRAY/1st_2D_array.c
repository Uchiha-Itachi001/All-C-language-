#include<stdio.h>
int main(){
    int n,m;
    printf("enter the number of rows : ");
    scanf("%d",&n);
    printf("enter the number of columb : ");
    scanf("%d",&m);
 int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           printf("enter the %d row %d eliment: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }

 for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);}
            printf("\n");}
    return 0;
}