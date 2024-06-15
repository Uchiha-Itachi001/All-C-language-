#include<stdio.h>
#include<limits.h>
int main(){
    int n,b=0;
    printf("enter the size : ");
    scanf("%d",&n);
    int arr[n];
    int max=INT_MIN;
for(int i=0;i<n;i++){
    printf("enter the number : ");
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    if(arr[i]>max){max=arr[i];
    b=arr[i];}}
int smax=INT_MIN;

for(int i=0;i<n;i++){
    if(arr[i]>smax&&arr[i]!=b){smax=arr[i];}}
    printf("%d\n",smax);

    for(int i=0;i<n;i++){
    printf("%d",arr[i]);}

    return 0;
}