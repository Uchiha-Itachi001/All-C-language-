#include<stdio.h>
int main(){
    int n,m;
    printf("enter the row and collumb : ");
    scanf("%d%d",&n,&m);
    int arr[n][m];
    int *ptr =&arr[0][0];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        printf("arr[%d][%d] : ",i,j);
        scanf("%d",ptr+3*i+j); 
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        printf("%d ",*(ptr+3*i+j));
        }
        printf("\n");
    }

    return 0;
}