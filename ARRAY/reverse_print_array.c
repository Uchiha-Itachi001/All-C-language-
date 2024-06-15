#include<stdio.h>
int main(){
int n;
printf("enter the size : ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    printf("enter the %d number : ",i+1);
    scanf("%d",&arr[i]);
}
for(int i=n-1;i>=0;i--){
    printf("%d\t",arr[i]);
}

    return 0;
}