#include<stdio.h>
int main(){
int n,m;
printf("enter the 1st matrix row and columb number : ");
scanf("%d%d",&n,&m);
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        printf("arr[%d][%d]",i,j);
        scanf("%d",&arr[i][j]);
    }
}

for(int i=0;i<n;i++){
   
        if(i%2!=0){
             for(int j=0;j<m;j++){
                int temp=arr[i][j];
                arr[i][j]=arr[i][n-1-i];
                arr[i][n-1-i]=temp;
        }
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        printf("%d ",arr[i][j]);
    }printf("\n");
}
    return 0;

}