#include<stdio.h>
int main(){
    int n;
    printf("enter the row/colum number :  ");
    scanf("%d",&n);
int arr[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("enter the %d rows %d element : ",i,j);
        scanf("%d",&arr[i][j]);
        }
}
// print trancpose :::
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        int t=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=t;
    }
}
// rotate :::
for(int i=0;i<n;i++){
    int j,k;
    for(j=0,k=n-1;j<k;j++,k--){
        int t=arr[i][j];
        arr[i][j]=arr[i][k];
        arr[i][k]=t;
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