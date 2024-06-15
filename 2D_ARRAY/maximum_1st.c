#include<stdio.h>
#include<limits.h>
int main(){
    int n,m;
    printf("enter the number of rows : ");
    scanf("%d",&n);
    printf("enter the number of columb : ");
    scanf("%d",&m);
 int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           printf("enter the %d row %d eliment: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }    
    int p=0,l=0;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
    
        for(int j=0;j<m;j++){
         if(arr[i][j]>max){max=arr[i][j];
         p=i;l=j;}
      } }
       printf("%d\n",max);
        printf("(%d,%d)\n",p,l);
       
    return 0; }