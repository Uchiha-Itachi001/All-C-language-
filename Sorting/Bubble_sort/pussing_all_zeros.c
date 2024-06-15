#include<stdio.h>
int main(){
    int n;
    printf("enter the array size : ");
    scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    printf("arr[%d] : ",i);
    scanf("%d",&arr[i]);
}
/*.........PUSS ALL '0' IN THE LAST USING BUBBLE MEMOTHERD......*/
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        if(arr[j]==0){
            int temp= arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
              }
    }
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
    return 0;
}