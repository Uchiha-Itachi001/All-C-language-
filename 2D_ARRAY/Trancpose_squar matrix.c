#include<stdio.h>
int main(){
    int n,m;
    printf("enter the row/colum numnber : ");
    scanf("%d",&n);
   
int arr[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("enter the %d rows %d colum : ",i,j);
        scanf("%d",&arr[i][j]);
        }
}
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        int t=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=t;
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){ 
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}


    return 0;
}