#include<stdio.h>
int main(){
    int n;
    printf("enter the number  : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the %d number :",i+1);
        scanf("%d",&arr[i]);
    }
    int brr[n];
    for(int i=0;i<n;i++){
        brr[i]=arr[n-1-i];
    }
  for(int i=0;i<n;i++){printf("%d\n",brr[i]);}

return 0;}